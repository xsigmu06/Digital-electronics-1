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
	c_en 		: in  std_logic;
	lights  : out unsigned(5 downto 0)
    

);
end entity traffic_lights;


architecture Behavioral of traffic_lights is

type state_type is (wg,stop1,sr,sg,stop2,wr);
signal state: state_type;
signal s_cnt: unsigned(3 downto 0);
constant SEC5: unsigned(3 downto 0) := "1111";  
constant SEC1: unsigned(3 downto 0) := "0011"; 

begin



  traffic: process(clk_i, srst_n_i,c_en)
  begin
	if rising_edge(clk_i) and rising_edge(c_en)  then 
			if srst_n_i = '0' then -- synchronous reset, active low
				s_cnt <= x"0";
				state <= wg;
			else 
				case state is
							 when wg =>
									if s_cnt < SEC5 then
										state <= wg;
										s_cnt <= s_cnt + 1;
									else
										state <= stop1;
										s_cnt <= x"0";
										end if;
							 when stop1 =>
									if s_cnt < SEC1 then
										state <= stop1;
										s_cnt <= s_cnt + 1;
									else
										state <= sr;
										s_cnt <= x"0";
									end if;
							when sr =>
									if s_cnt < SEC1 then
										state <= sr;
										s_cnt <= s_cnt + 1;
									else
										state <= wg;
										s_cnt <= x"0";
									end if;
							when sg =>
									if s_cnt < SEC5 then
										state <= sg;
										s_cnt <= s_cnt + 1;
									else
										state <= stop2;
										s_cnt <= x"0";
									end if;
							when stop2 =>
									if s_cnt < SEC1 then
										state <= stop2;
										s_cnt <= s_cnt + 1;
									else
										state <= wr;
										s_cnt <= x"0";
									end if;
							when wr =>
									if s_cnt < SEC1 then
										state <= wr;
										s_cnt <= s_cnt + 1;
									else
										state <= wg;
										s_cnt <= x"0";
									end if;
							when others =>
								  state <= wg;
				end case;   
			end if;		
		end if;				
  end process traffic;

 Assign : process(state)
  begin
      case state is
          when wg 	=> lights <= "001100";  -- R O G R O G  from south to west
          when stop1 => lights <= "100100";
          when sr 	=> lights <= "101010";
          when sg 	=> lights <= "100001";
          when stop2 => lights <= "100100";
          when wr 	=> lights <= "010100";
          when others =>lights <= "001100";
       end case;
  end process;
end Behavioral;