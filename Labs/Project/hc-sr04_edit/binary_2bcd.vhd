----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:45:59 04/19/2020 
-- Design Name: 
-- Module Name:    binary_2bcd - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

------------------------------------------------------------------------
-- Entity declaration for binary to bcd convertor
------------------------------------------------------------------------
entity binary_2bcd is
	Generic (
		NBITS 		: integer := 12;
		NBITSBCD 	: integer := 16
	);
	Port ( 
		clk_i 		: in  STD_LOGIC;
		srst_n_i 	: in  STD_LOGIC;	-- Synchronous reset (active low)
		dstnc_i 	: in  STD_LOGIC_VECTOR (NBITS-1 downto 0);
		
		m_o, dm_o, cm_o, mm_o : out  STD_LOGIC_VECTOR (3 downto 0) 
	);
end binary_2bcd;

------------------------------------------------------------------------
-- Architecture declaration for binary to bcd convertor
------------------------------------------------------------------------
architecture Behavioral of binary_2bcd is

	signal s_en  	: std_logic;
	signal num_bcd  : STD_LOGIC_VECTOR (NBITSBCD-1 downto 0) := (others => '0');

begin
	--------------------------------------------------------------------
    -- Sub-block of clock_enable entity.
	CLK_EN : entity work.clock_enable
		generic map (
			g_NPERIOD => x"0FA0"        -- @ 4ms if fclk = 1 MHz
		)
		port map (
			srst_n_i 		=> srst_n_i,
			clk_i 			=> clk_i,
			clock_enable_o 	=> s_en
		);
	
	--------------------------------------------------------------------
    -- process_bcd:
    -- Sequential process with synchronous reset and clock enable,
    -- which implements binary to bcd convertor
    --------------------------------------------------------------------
	process_bcd: process(dstnc_i,clk_i)
	
		variable z: std_logic_vector(NBITS+NBITSBCD-1 downto 0);
	
    begin
		if rising_edge (clk_i) then
			if srst_n_i = '0' then
				num_bcd <= (others => '0');
				
			elsif s_en= '1' then
				-- Initialization of data to zero
				z := (others => '0');
				-- First three left shifts
				z(NBITS+2 downto 3) := dstnc_i;
				
				-- Loop for the remaining shifts
				for i in 0 to NBITS-4 loop
					-- Units (4 bits).
					if z(NBITS+3 downto NBITS) > "0100" then
						z(NBITS+3 downto NBITS) := z(NBITS+3 downto NBITS) + 3;
					end if;
					
					-- Tens (4 bits).
					if z(NBITS+7 downto NBITS+4) > "0100" then
						z(NBITS+7 downto NBITS+4) := z(NBITS+7 downto NBITS+4) + 3;
					end if;
					
					-- Hundreds (4 bits).
					if z(NBITS+11 downto NBITS+8) > "0100" then
						z(NBITS+11 downto NBITS+8) := z(NBITS+11 downto NBITS+8) +3;
					end if;
					
					-- Thousands (4 bits).
					if z(NBITS+14 downto NBITS+12) > "0100" then
						z(NBITS+14 downto NBITS+12) := z(NBITS+14 downto NBITS+12) + 3;
					end if;
					
					-- Shift to the left.
					z(NBITS+NBITSBCD-1 downto 1) := z(NBITS+NBITSBCD-2 downto 0);
					
				end loop;
				
				-- Assign z data to our BCD variable.
				num_bcd <= z(NBITS+NBITSBCD-1 downto NBITS);
				
			end if;
		end if;
    end process;
	
	m_o 	<= num_bcd( 15 downto 12); 
	dm_o 	<= num_bcd( 11 downto 8);		
	cm_o 	<= num_bcd( 7 downto 4);
	mm_o 	<= num_bcd( 3 downto 0);

end Behavioral;

-- source : https://github.com/albaruizgo/CICT_Project_Binary-BCDconverter