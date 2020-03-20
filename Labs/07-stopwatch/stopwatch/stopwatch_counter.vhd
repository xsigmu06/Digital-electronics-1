library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

 

entity stopwatch is
port(
    clk_i         : in std_logic;
    srst_n_i    : in std_logic;
    ce_100Hz_i    : in std_logic;
    cnt_en_i    : in std_logic;
   
    sec_h_o : out std_logic_vector(4-1 downto 0); -- tens of seconds
    sec_l_o : out std_logic_vector(4-1 downto 0); -- seconds
    hth_h_o : out std_logic_vector(4-1 downto 0); -- tenths of second
    hth_l_o : out std_logic_vector(4-1 downto 0) -- hundredths of seconds
	 );
end entity stopwatch;
    
architecture Behavioral of stopwatch is
    signal s_cnt0 : unsigned(4-1 downto 0) := (others => '0');
    signal s_cnt1 : unsigned(4-1 downto 0) := (others => '0');
    signal s_cnt2 : unsigned(4-1 downto 0) := (others => '0');
    signal s_cnt3 : unsigned(4-1 downto 0) := (others => '0');
 
    begin 
	 
    CNT_0 : process (clk_i) 
    begin
        if rising_edge(clk_i) then  -- Rising clock edge
            if srst_n_i = '0' then  -- Synchronous reset (active low)
                s_cnt0<="0000";
            elsif ce_100Hz_i = '1' and cnt_en_i='1' then
				if s_cnt0<"1001" then
               s_cnt0<=s_cnt0+1;
				
				else
				s_cnt0<="0000";
				
				end if;
            end if;
        end if;
    end process CNT_0;
    
    CNT_1 : process (clk_i) 
    begin
        if rising_edge(clk_i) then  -- Rising clock edge
            if srst_n_i = '0' then  -- Synchronous reset (active low)
                s_cnt1<="0000";
                
            elsif ce_100Hz_i = '1' and s_cnt0="1001"then
            		if s_cnt1 < "1001" then
               s_cnt1<=s_cnt1+1;
				
				else
				s_cnt1<="0000";
				
				end if;
            end if;
        end if;
    end process CNT_1;
    
    CNT_2 : process (clk_i) 
    begin
        if rising_edge(clk_i) then  -- Rising clock edge
            if srst_n_i = '0' then  -- Synchronous reset (active low)
                s_cnt2<="0000";
            elsif ce_100Hz_i = '1' and s_cnt1="1001" and s_cnt0="1001" then
				if s_cnt2<"1001" then
               s_cnt2 <= s_cnt2+1;
				
				else
				s_cnt2<="0000";
				
				end if;
            end if;
        end if;
    end process CNT_2; 
    
    CNT_3 : process (clk_i) 
    begin
        if rising_edge(clk_i) then  -- Rising clock edge
            if srst_n_i = '0' then  -- Synchronous reset (active low)
                s_cnt3<="0000";
            elsif ce_100Hz_i = '1' and s_cnt2="1001" and s_cnt1="1001"and s_cnt0="1001" then
				if s_cnt3<"0101" then
               s_cnt3 <=s_cnt3+1;
				
				else
				s_cnt3<="0000";
				
				end if;
            end if;
        end if;
    end process CNT_3;

 	 sec_h_o <= std_logic_vector(s_cnt3);
    sec_l_o <= std_logic_vector(s_cnt2);
    hth_h_o <= std_logic_vector(s_cnt1);
    hth_l_o <= std_logic_vector(s_cnt0);

end architecture Behavioral;