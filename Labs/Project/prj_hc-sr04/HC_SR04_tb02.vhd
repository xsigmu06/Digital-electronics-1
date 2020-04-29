--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:23:42 04/29/2020
-- Design Name:   
-- Module Name:   /home/ise/ise/hc-sr04_edit/HC_SR04_tb02.vhd
-- Project Name:  hc-sr04
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: hc_sr04
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
 
ENTITY HC_SR04_tb02 IS
END HC_SR04_tb02;
 
ARCHITECTURE behavior OF HC_SR04_tb02 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT hc_sr04
    PORT(
         clk_i : IN  std_logic;
         srst_n_i : IN  std_logic;
         echo_i : IN  std_logic;
         trig_o : OUT  std_logic;
         dstnc_o : OUT  std_logic_vector(11 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal srst_n_i : std_logic := '0';
   signal echo_i : std_logic := '0';

 	--Outputs
   signal trig_o : std_logic;
   signal dstnc_o : std_logic_vector(11 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 1 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: hc_sr04 PORT MAP (
          clk_i => clk_i,
          srst_n_i => srst_n_i,
          echo_i => echo_i,
          trig_o => trig_o,
          dstnc_o => dstnc_o
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
      -- hold reset state for 100 ns
	  
      wait for 100 ns;
	  srst_n_i <= '1';
	  
	  wait for clk_i_period*100;
	  echo_i <= '1';
	  
	  wait for 10 ms;
	  echo_i <= '0';
			
      wait for clk_i_period*60000;
	  srst_n_i <= '0';
	  
      wait for clk_i_period*11;
	  srst_n_i <= '1';
	  wait for clk_i_period*1000;
	  echo_i <= '1';
	  
	  wait for 70 ms;
	  echo_i <= '0';

      -- insert stimulus here 

      wait;
   end process;

END;
