------------------------------------------------------------------------
-- Library declaration
------------------------------------------------------------------------

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

------------------------------------------------------------------------
-- Entity declaration for stopwatch
------------------------------------------------------------------------

entity traffic_lights is
	port(
		clk_i    : in  std_logic;
		srst_n_i : in  std_logic;   -- Synchronous reset (active low)
		ce_n_i 	: in  std_logic;
		
		lights_o  : out unsigned(5 downto 0)
	);
end entity traffic_lights;

architecture Behavioral of traffic_lights is

	type state_type is (NorthSouth_Green, NorthSouth_Orange, BothRed1, EastWest_Green, EastWest_Orange, BothRed2);
	
	signal s_state: state_type;
	signal s_cnt: unsigned(3 downto 0) := "0000";
	
	constant SEC5: unsigned(3 downto 0) := "0100";  -- 4 (dec) <= 1Hz clock| count to 5 (from 0 to 4)
	constant SEC1: unsigned(3 downto 0) := "0000";  -- count to 1

	begin

	traffic: process(clk_i)
		begin
			if rising_edge(clk_i) then
				if srst_n_i = '0' then 	-- synchronous reset, active low
					s_cnt <= (others => '0');
					s_state <= NorthSouth_Green;	-- state 0
					
				elsif ce_n_i = '1' then 
					case s_state is
					
						when NorthSouth_Green =>
							if s_cnt < SEC5 then
								s_state <= NorthSouth_Green;
								s_cnt <= s_cnt + 1;
							else
								s_state <= NorthSouth_Orange;
								s_cnt <= x"0";
							end if;
							
						when NorthSouth_Orange =>
								if s_cnt < SEC1 then
								s_state <= NorthSouth_Orange;
								s_cnt <= s_cnt + 1;
							else
								s_state <= BothRed1;
								s_cnt <= x"0";
							end if;
							
						when BothRed1 =>
							if s_cnt < SEC1 then
								s_state <= BothRed1;
								s_cnt <= s_cnt + 1;
							else
								s_state <= EastWest_Green;
								s_cnt <= x"0";
							end if;
							
						when EastWest_Green =>
							if s_cnt < SEC5 then
								s_state <= EastWest_Green;
								s_cnt <= s_cnt + 1;
							else
								s_state <= EastWest_Orange;
								s_cnt <= x"0";
							end if;
							
						when EastWest_Orange =>
							if s_cnt < SEC1 then
								s_state <= EastWest_Orange;
								s_cnt <= s_cnt + 1;
							else
								s_state <= BothRed2;
								s_cnt <= x"0";
							end if;
							
						when BothRed2 =>
							if s_cnt < SEC1 then
								s_state <= BothRed2;
								s_cnt <= s_cnt + 1;
							else
								s_state <= NorthSouth_Green;
								s_cnt <= x"0";
							end if;
							
						when others =>
							s_state <= NorthSouth_Green;
							
					end case;   
				end if;		
			end if;				
		end process traffic;

	Assign : process(s_state)
		begin
			case s_state is
				when NorthSouth_Green	=> lights_o <= "001100";  -- "001100" ... Red Orange Green Red Orange Green (NorthSouth light to EastWest light)
				when NorthSouth_Orange 	=> lights_o <= "010100";
				when BothRed1				=> lights_o <= "100100";
				
				when EastWest_Green 		=> lights_o <= "100001";
				when EastWest_Orange 	=> lights_o <= "100010";
				when BothRed2 				=> lights_o <= "100100";
				when others => lights_o <= "001100";
			end case;
		end process;
end Behavioral;