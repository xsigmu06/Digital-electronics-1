MODEL
MODEL_VERSION "v1998.8";
DESIGN "hc_sr04";

/* port names and type */
INPUT S:PIN32 = clk_i;
INPUT S:PIN143 = srst_n_i;
INPUT S:PIN3 = echo_i;
OUTPUT S:PIN142 = dstnc_o<0>;
OUTPUT S:PIN138 = dstnc_o<10>;
OUTPUT S:PIN33 = dstnc_o<11>;
OUTPUT S:PIN140 = dstnc_o<1>;
OUTPUT S:PIN139 = dstnc_o<2>;
OUTPUT S:PIN31 = dstnc_o<3>;
OUTPUT S:PIN30 = dstnc_o<4>;
OUTPUT S:PIN28 = dstnc_o<5>;
OUTPUT S:PIN35 = dstnc_o<6>;
OUTPUT S:PIN34 = dstnc_o<7>;
OUTPUT S:PIN38 = dstnc_o<8>;
OUTPUT S:PIN39 = dstnc_o<9>;
OUTPUT S:PIN2 = trig_o;

/* timing arc definitions */
clk_i_dstnc_o<0>_delay: DELAY clk_i dstnc_o<0>;
clk_i_dstnc_o<10>_delay: DELAY clk_i dstnc_o<10>;
clk_i_dstnc_o<11>_delay: DELAY clk_i dstnc_o<11>;
clk_i_dstnc_o<1>_delay: DELAY clk_i dstnc_o<1>;
clk_i_dstnc_o<2>_delay: DELAY clk_i dstnc_o<2>;
clk_i_dstnc_o<3>_delay: DELAY clk_i dstnc_o<3>;
clk_i_dstnc_o<4>_delay: DELAY clk_i dstnc_o<4>;
clk_i_dstnc_o<5>_delay: DELAY clk_i dstnc_o<5>;
clk_i_dstnc_o<6>_delay: DELAY clk_i dstnc_o<6>;
clk_i_dstnc_o<7>_delay: DELAY clk_i dstnc_o<7>;
clk_i_dstnc_o<8>_delay: DELAY clk_i dstnc_o<8>;
clk_i_dstnc_o<9>_delay: DELAY clk_i dstnc_o<9>;
clk_i_trig_o_delay: DELAY clk_i trig_o;

/* timing check arc definitions */
ENDMODEL
