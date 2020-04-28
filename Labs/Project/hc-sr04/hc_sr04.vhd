----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:54:02 04/20/2020 
-- Design Name: 
-- Module Name:    hc_sr04 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity hc_sr04 is
    Port ( clk_i : in  STD_LOGIC;
           srst_n_i : in  STD_LOGIC;  -- active low
           echo_i : in  STD_LOGIC;
           trig_o : out  STD_LOGIC :='0' ;
		   dstnc_o : out STD_LOGIC_VECTOR (11 downto 0) := x"000" -- 4000 mm
		   );
end hc_sr04;

architecture Behavioral of hc_sr04 is
		
		type state_type is (Trigger, Pulse, Echo, Calc, Reset);
	
		signal s_state: state_type;
		signal s_cntTrig: unsigned (3 downto 0) :="0000";
		signal s_cnt : unsigned (14 downto 0) := "000000000000000"; -- (2* 4m) / 340m/s = 23 530 us -> 2^15= 32 768
		signal s_cntMax : unsigned (15 downto 0) := x"0000";
		signal result : STD_LOGIC_VECTOR(30 downto 0):="0000000000000000000000000000000";
		signal s_en : STD_LOGIC;

		constant trigstart : unsigned (3 downto 0) := "1010";
		constant soundspeed : unsigned(15 downto 0) := "0010101110000101"; -- mm/us  /2
		constant maxdist : unsigned(15 downto 0) := x"FFFF";  -- najdlhsi cas (8metrov = 2 *4) 
		
	begin
	
	CLK_EN : entity work.clock_enable
	 generic map (
        g_NPERIOD => x"0001"        -- @ 1 us if fclk = 1 MHz
    )
    port map (
    srst_n_i => srst_n_i,
    clk_i => clk_i,
    clock_enable_o => s_en
    );
	
	
	
	soundmeasure: process(clk_i )
		begin
			if rising_edge(clk_i) then
				if srst_n_i = '0' then 	-- synchronous reset, active low
					s_cntTrig <= (others => '0');
					s_cnt <= (others => '0');
					s_state <= Trigger;	-- state 0
					
				elsif s_en = '1' then
					case s_state is
						 
						 when Trigger =>
								if s_cntTrig < trigstart then
									trig_o <= '1';
									s_state <= Trigger;
									s_cntTrig <= s_cntTrig + x"1";
								else 
									trig_o <= '0';
									s_state <= Pulse;
									s_cntTrig <= "0000" ;
								end if;
								
						when Pulse => 
								if echo_i = '1' then
									s_cnt <= s_cnt + 1;
									s_state <= Echo;
									s_cntMax <= s_cntMax + 1;
								elsif s_cntMax < maxdist then
									s_cntMax <= s_cntMax + 1;
									s_state <= Pulse;
								else 
									s_cntMax <= x"0000";
									s_state <= Trigger;
								end if;
								
						when Echo => 
								if echo_i = '1' then
									s_state <= Echo;
									s_cnt <= s_cnt + 1;
									s_cntMax <= s_cntMax + 1;
								else
									s_state <= calc;
								end if;
						when Calc => 		
									result <= std_logic_vector(unsigned(s_cnt) * unsigned(soundspeed));		
									s_state <= Reset;
						when Reset =>
									if s_cntMax < maxdist then
									s_cntMax <= s_cntMax + 1;
									else
									s_state <= Trigger;
									dstnc_o <= result(27 downto 16);
									s_cnt <= "000000000000000";
									s_cntMax <= x"0000";
									end if;
									
									
						when others => 
									s_state <= Trigger;
					end case;
				end if;
			end if;
		end process soundmeasure;
			

end Behavioral;

