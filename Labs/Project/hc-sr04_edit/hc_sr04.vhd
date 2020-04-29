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

------------------------------------------------------------------------
-- Entity declaration for hc_sr04 driver
------------------------------------------------------------------------
entity hc_sr04 is
	Port ( 
		clk_i 		: in  STD_LOGIC;
		srst_n_i 	: in  STD_LOGIC;	-- Synchronous reset (active low)
		echo_i 		: in  STD_LOGIC;
		
		trig_o 	: out  STD_LOGIC := '0' ;
		dstnc_o : out STD_LOGIC_VECTOR (11 downto 0) := x"000" 	-- max 4000 mm ( x"FA0" )
	);
end hc_sr04;

------------------------------------------------------------------------
-- Architecture declaration for hc_sr04 driver
------------------------------------------------------------------------
architecture Behavioral of hc_sr04 is
		
	type state_type is (Trigger, Pulse, Echo, Calc, Reset);

	signal s_state		: state_type;
	signal s_cntTrig	: unsigned (3 downto 0) := (others => '0');	-- controls trigger to be 10 us long along with trigStart 
	signal s_cntMeas	: unsigned (14 downto 0) := (others => '0'); 	-- maximum duration of echo : (2 x 4 m) / 340 m/s = 23 530 us -> 15 bits ( 2^15 = 32 768 )
	signal s_cntMax 	: unsigned (15 downto 0) := (others => '0'); 
	signal s_result 	: STD_LOGIC_VECTOR (30 downto 0); 
	signal s_en 		: STD_LOGIC;

	constant trigStart 	: unsigned (3 downto 0) := "1010";		-- controls trigger to be 10 us long along with s_cntTrig 
	constant soundSpeed 	: unsigned (15 downto 0) := "0010101110000101"; -- speed of sound mm/us divided by 2 in 16 bits ( 0.17 * 2^16 = 11141 )
	constant maxDist 	: unsigned (15 downto 0) := x"1FFF";  		-- max distance (2 x 4 m) 8191
		
begin
	
	--------------------------------------------------------------------
    -- Sub-block of clock_enable entity.
	CLK_EN : entity work.clock_enable
		generic map (
			g_NPERIOD => x"0001"        -- @ 1 us if fclk = 1 MHz
		)
		port map (
			srst_n_i 		=> srst_n_i,
			clk_i 			=> clk_i,
			clock_enable_o	=> s_en
		);
	
	--------------------------------------------------------------------
    -- measure:
    -- Sequential process with synchronous reset and clock enable,
    -- which implements a FSM for measuring duration of the 
	-- sound signal received and computing the actual distance of
	-- the object detected.
    --------------------------------------------------------------------
	measure: process(clk_i )
	begin
		if rising_edge(clk_i) then
			if srst_n_i = '0' then 	-- synchronous reset, active low
				s_cntTrig 	<= (others => '0');
				s_cntMeas 	<= (others => '0');
				s_state 	<= Trigger;	-- state 0

			elsif s_en = '1' then
				case s_state is
				
				when Trigger =>
					trig_o 		<= '1';
				
					if s_cntTrig < trigStart then	
						s_cntTrig 	<= s_cntTrig + x"1";
						s_state 	<= Trigger;
				
					else 
						trig_o 		<= '0';
						s_cntTrig 	<= "0000";
						s_state 	<= Pulse;						
					end if;
					
				when Pulse => 
					if echo_i = '1' then
						s_cntMeas 	<= s_cntMeas + 1;						
						s_cntMax 	<= s_cntMax + 1;
						s_state 	<= Echo;
						
					elsif s_cntMax < maxDist then
						s_cntMax 	<= s_cntMax + 1;
						s_state 	<= Pulse;
						
					else 
						s_cntMax 	<= x"0000";
						s_state 	<= Trigger;					
					end if;

				when Echo => 
					if echo_i = '1' then					
						s_cntMeas 	<= s_cntMeas + 1;
						s_cntMax 	<= s_cntMax + 1;
						s_state 	<= Echo;
						
					else
						s_state 	<= Calc;						
					end if;
					
				when Calc => 		
					s_result 	<= std_logic_vector(unsigned(s_cntMeas) * unsigned(soundSpeed));		
					s_state 	<= Reset;
					
				when Reset =>
					if s_cntMax < maxDist then
						s_cntMax 	<= s_cntMax + 1;
						
					else						
						dstnc_o 	<= s_result(27 downto 16);
						s_cntMeas 	<= "000000000000000";
						s_cntMax 	<= x"0000";
						s_state 	<= Trigger;					
					end if;

				when others => 
					s_state <= Trigger;
					
				end case;
			end if;
		end if;
	end process measure;		

end Behavioral;

