--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:30:14 04/23/2020
-- Design Name:   
-- Module Name:   F:/projekty_de/hc-sr04/top_tb00.vhd
-- Project Name:  hc-sr04
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Top
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY top_tb00 IS
END top_tb00;
 
ARCHITECTURE behavior OF top_tb00 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Top
    PORT(
         clk_i : IN  std_logic;
         BTN0 : IN  std_logic;
         echo : IN  std_logic;
         trig : OUT  std_logic;
         disp_seg_o : OUT  std_logic_vector(6 downto 0);
         disp_dig_o : OUT  std_logic_vector(3 downto 0);
         disp_dp : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal BTN0 : std_logic := '0';
   signal echo : std_logic := '0';

 	--Outputs
   signal trig : std_logic;
   signal disp_seg_o : std_logic_vector(6 downto 0);
   signal disp_dig_o : std_logic_vector(3 downto 0);
   signal disp_dp : std_logic;

   -- Clock period definitions
   constant clk_i_period : time := 1 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Top PORT MAP (
          clk_i => clk_i,
          BTN0 => BTN0,
          echo => echo,
          trig => trig,
          disp_seg_o => disp_seg_o,
          disp_dig_o => disp_dig_o,
          disp_dp => disp_dp
        );

   -- Clock process definitions
   clk_i_process :process
   begin
		clk_i <= '0';
		wait for clk_i_period/2;
		clk_i <= '1';
		wait for clk_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		BTN0 <= '1';
      wait for clk_i_period*20;
	  		

      -- insert stimulus here  
	  echo <= '1';
	  wait for clk_i_period*4705;
	  echo <= '0';
	    wait for clk_i_period*20;
	  echo <= '1';
	  wait for clk_i_period*600;
	  echo <= '0';

      wait;
   end process;

END;
