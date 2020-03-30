----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:15:56 03/25/2020 
-- Design Name: 
-- Module Name:    top - Behavioral 
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
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top is
	port(
		clk_i : in std_logic;
		BTN0  : in std_logic;
		
		LDW_5, LDW_4, LDW_3, LDS_2, LDS_1, LDS_0 : out std_logic
		-- LD4_CPLD, LD13_CPLD, LD12_CPLD, LD0_CPLD, LD9_CPLD, LD8_CPLD : out std_logic -- for clpd board
	);
end entity top;

architecture Behavioral of top is

	signal s_en : std_logic;
	signal s_lights_o : unsigned (5 downto 0);
	
	begin
		CLK_EN : entity work.clock_enable
			generic map (
				g_NPERIOD => X"2710" -- 1 s for fclk = 10 kHz 
			)
			port map( 
				srst_n_i 		=> BTN0,
				clk_i 			=> clk_i,
				clock_enable_o => s_en
			);

		TRAFFIC_LIGHTS : entity work.traffic_lights
			port map(
				ce_n_i 		=> s_en,
				srst_n_i 	=> BTN0,
				clk_i			=> clk_i,
				lights_o 	=> s_lights_o
			);

		LDW_5		<=	s_lights_o(5);	-- NorthSouth_Red
		LDW_4 	<=	s_lights_o(4);	-- NorthSouth_Orange
		LDW_3 	<=	s_lights_o(3);	-- NorthSouth_Green
		
		LDS_2 	<=	s_lights_o(2);	-- EastWest_Red
		LDS_1 	<=	s_lights_o(1);	-- EastWest_Orange
		LDS_0 	<=	s_lights_o(0);	-- EastWest_Green
		
		-- for cpld board
--		LD4_CPLD		<=	s_lights_o(5);	
--		LD13_CPLD 	<=	s_lights_o(4);
--		LD12_CPLD 	<=	s_lights_o(3);	

--		LD0_CPLD 	<=	s_lights_o(2);
--		LD9_CPLD 	<=	s_lights_o(1);
--		LD8_CPLD 	<=	s_lights_o(0);

end Behavioral;

