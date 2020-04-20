--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:53:32 04/20/2020
-- Design Name:   
-- Module Name:   F:/projekty_de/hc-sr04/hc_sr04_tb00.vhd
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
use IEEE.std_logic_unsigned.all;
use IEEE.std_logic_arith.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY hc_sr04_tb00 IS
END hc_sr04_tb00;
 
ARCHITECTURE behavior OF hc_sr04_tb00 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT hc_sr04
    PORT(
         clk_i : IN  std_logic;
         srst_n_i : IN  std_logic;
         echo_i : IN  std_logic;
         trig_o : OUT  std_logic;
         ce_n_i : IN  std_logic;
         dstnc_o : OUT  std_logic_vector(11 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal srst_n_i : std_logic := '0';
   signal echo_i : std_logic := '0';
   signal ce_n_i : std_logic := '0';

 	--Outputs
   signal trig_o : std_logic := '0' ;
   signal dstnc_o : std_logic_vector(11 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: hc_sr04 PORT MAP (
          clk_i => clk_i,
          srst_n_i => srst_n_i,
          echo_i => echo_i,
          trig_o => trig_o,
          ce_n_i => ce_n_i,
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
      -- hold reset state for 100 ns.
  	  srst_n_i <= '1';
	  ce_n_i <= '1';
      wait for 100 ns;	
	  trig_o <= '1'; 
      wait for clk_i_period*10;
	  echo_i <= '1';
	  wait for clk_i_period*100;
	  echo_i <= '0';
	  wait for clk_i_period*10;
	  srst_n_i <= '0';
	  wait for clk_i_period*10;
	  srst_n_i <= '1';
      wait;
   end process;

END;
