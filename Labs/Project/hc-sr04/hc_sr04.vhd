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
           srst_n_i : in  STD_LOGIC;
           echo_i : in  STD_LOGIC;
           trig_o : out  STD_LOGIC;
		   dstnc_o : out STD_LOGIC_VECTOR(11 downto 0) -- 4000 mm
		   );
end hc_sr04;

architecture Behavioral of hc_sr04 is
		
		type state_type is (Trigger, 40kHz, Echo);
	
		signal s_state: state_type;
		signal s_cnt: unsigned(14 downto 0) := x"0"; -- (2* 4m) / 340m/s = 23 530 us -> 2^15= 32 768
		signal sound: unsigned(14 downto 0);
		
		constant 10us : unsigned(3 downto 0) := "1010";
		
	begin
	
	
	
	soundmeasure: process(clk_i)
		begin
			if rising_edge(clk_i) then
				if srst_n_i = '0' then 	-- synchronous reset, active low
					s_cnt <= (others => '0');
					s_state <= Trigger;	-- state 0
					
				else
					case s_state is
						 
						 when Trigger =>
								if s_cnt < 10us then
									s_state <= Trigger;
									trig_i <= '1';
									s_cnt <= s_cnt + 1;
								else 
									s_state <= 40kHz
									s_cnt <= x"0";
									trig_i <= '0';
									
								end if;
								
						when 40kHz => 
								if rising_edge(echo_i) then
									s_state <= Echo;
								else
									s_state <= 40kHz
								end if;
						when Echo => 
								if echo_i = '1' then
									s_state <= Echo;
									s_cnt <= s_cnt + 1;
								else 
									s_state <= Trigger;
									sound <=  s_count;
						
						when others => 
									s_state <= Trigger;
					end case;
				end if;
			end if;
		end process soundmeasure;
								
	

end Behavioral;

