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
		LD0_CPLD, LD1_CPLD, LD5_CPLD, LD8_CPLD, LD9_CPLD, LD12_CPLD : out std_logic
			--lights_o : out unsigned (5 downto 0)
		);
end entity top;

architecture Behavioral of top is
	signal s_en : std_logic;
	signal lights_o : unsigned (5 downto 0);
	begin
CLK_EN : entity work.clock_enable
	generic map (
			 g_NPERIOD => X"09c4"
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
		
		
		LD0_CPLD <=			lights_o(3);
		LD1_CPLD <=			lights_o(4);
		LD5_CPLD <=			lights_o(5);
		LD8_CPLD <=			lights_o(0);
		LD9_CPLD <=			lights_o(1);
		LD12_CPLD <=		lights_o(2);

		


end Behavioral;

