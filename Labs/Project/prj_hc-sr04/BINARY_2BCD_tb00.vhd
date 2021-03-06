--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:28:28 04/28/2020
-- Design Name:   
-- Module Name:   /home/ise/ise/Project/hc-sr04/BINARY_2BCD_tb00.vhd
-- Project Name:  hc-sr04
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: binary_2bcd
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
 
ENTITY BINARY_2BCD_tb00 IS
END BINARY_2BCD_tb00;
 
ARCHITECTURE behavior OF BINARY_2BCD_tb00 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT binary_2bcd
    PORT(
         clk_i : IN  std_logic;
         srst_n_i : IN  std_logic;
         dstnc_i : IN  std_logic_vector(11 downto 0);
         m_o : OUT  std_logic_vector(3 downto 0);
         dm_o : OUT  std_logic_vector(3 downto 0);
         cm_o : OUT  std_logic_vector(3 downto 0);
         mm_o : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal srst_n_i : std_logic := '0';
   signal dstnc_i : std_logic_vector(11 downto 0) := (others => '0');

 	--Outputs
   signal m_o : std_logic_vector(3 downto 0);
   signal dm_o : std_logic_vector(3 downto 0);
   signal cm_o : std_logic_vector(3 downto 0);
   signal mm_o : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 1 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: binary_2bcd PORT MAP (
          clk_i => clk_i,
          srst_n_i => srst_n_i,
          dstnc_i => dstnc_i,
          m_o => m_o,
          dm_o => dm_o,
          cm_o => cm_o,
          mm_o => mm_o
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
		srst_n_i <= '1';		
		dstnc_i <= x"5FF";
		
		wait for clk_i_period*10;
		srst_n_i <= '0';
		
		wait for clk_i_period*10;
		srst_n_i <= '1';
		
      -- insert stimulus here 

      wait;
   end process;

END;
