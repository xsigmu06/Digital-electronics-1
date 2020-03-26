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
	signal s_cnt: unsigned(3 downto 0) := "0000";
	
	constant SEC5: unsigned(3 downto 0) := "0100";  -- s_cnt to 5
	constant SEC1: unsigned(3 downto 0) := "0000";  -- s_cnt to 1

	begin

	traffic: process(clk_i, srst_n_i,c_en)
		begin
			if rising_edge(clk_i) then -- and rising_edge(c_en)  then 
				if srst_n_i = '0' then -- synchronous reset, active low
					s_cnt <= (others => '0');
					state <= wg;
				elsif c_en = '1' then 
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
								state <= sg;
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
				when wg		=> lights <= "001100";  -- R O G R O G  from west to south,	wg...west go
				when stop1 	=> lights <= "100100";	-- stop...both red
				when sr		=> lights <= "100010";	-- sr...south ready
				when sg 		=> lights <= "100001";	-- sg...south go
				when stop2 	=> lights <= "100100";	-- stop...both red
				when wr 		=> lights <= "010100";	-- wr...west ready
				when others => lights <= "001100";
			end case;
		end process;
end Behavioral;