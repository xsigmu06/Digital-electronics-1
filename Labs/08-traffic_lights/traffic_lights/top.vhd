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
		
		LDW_r, LDW_o, LDW_g, LDS_r, LDS_o, LDS_g : out std_logic
		-- LD12_CPLD, LD8_CPLD, LD5_CPLD, LD4_CPLD, LD1_CPLD, LD0_CPLD : out std_logic -- for clpd board
	);
end entity top;

architecture Behavioral of top is

	signal s_en : std_logic;
	signal lights_o : unsigned (5 downto 0);
	
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
				c_en 		=> s_en,
				srst_n_i => BTN0,
				clk_i		=> clk_i,
				lights 	=> lights_o
			);

		LDW_r		<=	lights_o(5);	-- light west red
		LDW_o 	<=	lights_o(4);	-- light west orange
		LDW_g 	<=	lights_o(3);	-- light west green
		LDS_r 	<=	lights_o(2);	-- light south red..
		LDS_o 	<=	lights_o(1);
		LDS_g 	<=	lights_o(0);
		
		-- for cpld board
--		LD12_CPLD		<=	lights_o(5);	-- light west red
--		LD5_CPLD 	<=	lights_o(4);	-- light west orange
--		LD4_CPLD 	<=	lights_o(3);	-- light west green
--		LD8_CPLD 	<=	lights_o(2);	-- light south red..
--		LD1_CPLD 	<=	lights_o(1);
--		LD0_CPLD 	<=	lights_o(0);

end Behavioral;

