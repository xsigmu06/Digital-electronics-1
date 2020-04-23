----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:21:52 04/20/2020 
-- Design Name: 
-- Module Name:    Top - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Top is
	port (
		 clk_i : in std_logic;
		 BTN0 : in std_logic;
		 echo : in std_logic;
		 trig : out std_logic;
		 disp_seg_o : out std_logic_vector(7-1 downto 0);
		 disp_dig_o : out std_logic_vector(4-1 downto 0);
		 disp_dp : out std_logic
	 );
end Top;

architecture Behavioral of Top is

	signal s_en : std_logic;
	signal s_data0 ,s_data1, s_data2, s_data3 : std_logic_vector(3 downto 0);
	signal s_dist : std_logic_vector (11 downto 0);
begin
			HC_SR04 : entity work.hc_sr04
			port map(
				clk_i  => clk_i,
				srst_n_i => BTN0,
			   echo_i => echo,
			   trig_o => trig,
			   dstnc_o => s_dist
			  );
		
		   
		   BINARY_2BCD : entity work.binary_2bcd
		   port map(
			   dstnc_i => s_dist,
			   m_o => s_data3,
			   dm_o => s_data2,
			   cm_o => s_data1,
			   mm_o => s_data0
			   );
		   
		   DRIVER_7SEG : entity work.driver_7seg
		   port map(
				clk_i => clk_i,
				srst_n_i => BTN0,
				data3_i => s_data3,
				data2_i => s_data2,
				data1_i => s_data1,
				data0_i => s_data0,
				seg_o => disp_seg_o,
				dig_o => disp_dig_o,
				dp_o => disp_dp,
				dp_i => "1110"
				);
		   
		   
		   
		  
				
			
			


end Behavioral;

