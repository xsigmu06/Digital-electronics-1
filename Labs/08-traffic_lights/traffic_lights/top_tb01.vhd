--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:58:35 03/30/2020
-- Design Name:   
-- Module Name:   /home/ise/ise/08-traffic_lights/traffic_lights/top_tb01.vhd
-- Project Name:  traffic_lights
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top
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
 
ENTITY top_tb01 IS
END top_tb01;
 
ARCHITECTURE behavior OF top_tb01 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top
    PORT(
         clk_i : IN  std_logic;
         BTN0 : IN  std_logic;
         LDW_5 : OUT  std_logic;
         LDW_4 : OUT  std_logic;
         LDW_3 : OUT  std_logic;
         LDS_2 : OUT  std_logic;
         LDS_1 : OUT  std_logic;
         LDS_0 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal BTN0 : std_logic := '0';

 	--Outputs
   signal LDW_5 : std_logic;
   signal LDW_4 : std_logic;
   signal LDW_3 : std_logic;
   signal LDS_2 : std_logic;
   signal LDS_1 : std_logic;
   signal LDS_0 : std_logic;

   -- Clock period definitions
   constant clk_i_period : time := 100 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          clk_i => clk_i,
          BTN0 => BTN0,
          LDW_5 => LDW_5,
          LDW_4 => LDW_4,
          LDW_3 => LDW_3,
          LDS_2 => LDS_2,
          LDS_1 => LDS_1,
          LDS_0 => LDS_0
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
		-- insert stimulus here 
		BTN0 <= '1';
      wait for 12000 ms;
		BTN0 <= '0';
		wait for 1000 ms;
		--wait for clk_i_period*1000000000;
		BTN0 <= '1';
		wait for 12000 ms;
      
      wait;
   end process;

END;
