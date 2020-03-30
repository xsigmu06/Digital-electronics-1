library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity stopwatch is
port(
   clk_i : 			in std_logic;	--(clock)
	srst_n_i : 		in std_logic;	--(synchronous reset, active low)
	ce_100Hz_i : 	in std_logic; 	--(clock enable)
	cnt_en_i :		in std_logic; 	--(stopwatch enable by external switch or push button)
	
	sec_h_o : out std_logic_vector(3 downto 0);	--(counter for tens of seconds)
	sec_l_o : out std_logic_vector(3 downto 0); 	--(counter for seconds)
	hth_h_o : out std_logic_vector(3 downto 0);	--(counter for tenths of seconds)
	hth_l_o : out std_logic_vector(3 downto 0)	--(counter for hundredths of seconds)
	);
end entity stopwatch;	

architecture Behavioral of stopwatch is
    signal s_cnt0, s_cnt1, s_cnt2, s_cnt3 : unsigned(3 downto 0) := (others => '0');
    begin
	 
	 p_stopwatch : process (clk_i)
	 begin
		if rising_edge(clk_i) then
			if srst_n_i = '0' then
				s_cnt0 <= (others => '0');
				s_cnt1 <= (others => '0');
				s_cnt2 <= (others => '0');
				s_cnt3 <= (others => '0');
			elsif ce_100Hz_i = '1' and cnt_en_i = '1' then
				if s_cnt0 < 9 then
					s_cnt0 <= s_cnt0 + 1;
				else
					s_cnt0 <= (others => '0');
					if s_cnt1 < 9 then
						s_cnt1 <= s_cnt1 + 1;
					else
						s_cnt1 <= (others => '0');
						if s_cnt2 < 9 then
							s_cnt2 <= s_cnt2 + 1;
						else
							s_cnt2 <= (others => '0');
							if s_cnt3 < 5 then
								s_cnt3 <= s_cnt3 + 1;
							else
								s_cnt0 <= (others => '0');
								s_cnt1 <= (others => '0');
								s_cnt2 <= (others => '0');
								s_cnt3 <= (others => '0');
							end if;
						end if;
					end if;
				end if;
			end if;
		end if;
	 end process p_stopwatch;

    hth_l_o <= std_logic_vector(s_cnt0);
	 hth_h_o <= std_logic_vector(s_cnt1);
	 sec_l_o <= std_logic_vector(s_cnt2);
	 sec_h_o <= std_logic_vector(s_cnt3);
end architecture Behavioral;