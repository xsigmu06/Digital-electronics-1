/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/projekty_de/hc-sr04/binary_2bcd.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_3906228563_3212880686_p_0(char *t0)
{
    char t20[16];
    char t23[16];
    char t25[16];
    char t30[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    unsigned int t22;
    int t24;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2688U);
    t3 = *((char **)t1);
    t13 = (12 + 16);
    t17 = (t13 - 1);
    t14 = (27 - t17);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t0 + 5128);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    t1 = (t0 + 4984);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(62, ng0);
    t1 = xsi_get_transient_memory(28U);
    memset(t1, 0, 28U);
    t3 = t1;
    memset(t3, (unsigned char)2, 28U);
    t4 = (t0 + 2688U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 28U);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 2688U);
    t4 = *((char **)t1);
    t13 = (12 + 2);
    t14 = (27 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    memcpy(t1, t3, 12U);
    xsi_set_current_line(66, ng0);
    t13 = (12 - 4);
    t1 = (t0 + 7734);
    *((int *)t1) = 0;
    t3 = (t0 + 7738);
    *((int *)t3) = t13;
    t17 = 0;
    t18 = t13;

LAB8:    if (t17 <= t18)
        goto LAB9;

LAB11:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(57, ng0);
    t3 = xsi_get_transient_memory(16U);
    memset(t3, 0, 16U);
    t7 = t3;
    memset(t7, (unsigned char)2, 16U);
    t8 = (t0 + 5128);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 16U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB9:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2688U);
    t7 = *((char **)t4);
    t19 = (12 + 3);
    t14 = (27 - t19);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t4 = (t7 + t16);
    t8 = (t20 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 15;
    t9 = (t8 + 4U);
    *((int *)t9) = 12;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t21 = (12 - 15);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t22;
    t9 = (t0 + 7742);
    t11 = (t23 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 3;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t24 = (3 - 0);
    t22 = (t24 * 1);
    t22 = (t22 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t22;
    t2 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t4, t20, t9, t23);
    if (t2 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2688U);
    t3 = *((char **)t1);
    t13 = (12 + 7);
    t14 = (27 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t20 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 19;
    t7 = (t4 + 4U);
    *((int *)t7) = 16;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t19 = (16 - 19);
    t22 = (t19 * -1);
    t22 = (t22 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t22;
    t7 = (t0 + 7746);
    t9 = (t23 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t21 = (3 - 0);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t22;
    t2 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t1, t20, t7, t23);
    if (t2 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2688U);
    t3 = *((char **)t1);
    t13 = (12 + 11);
    t14 = (27 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t20 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 23;
    t7 = (t4 + 4U);
    *((int *)t7) = 20;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t19 = (20 - 23);
    t22 = (t19 * -1);
    t22 = (t22 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t22;
    t7 = (t0 + 7750);
    t9 = (t23 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t21 = (3 - 0);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t22;
    t2 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t1, t20, t7, t23);
    if (t2 != 0)
        goto LAB18;

LAB20:
LAB19:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2688U);
    t3 = *((char **)t1);
    t13 = (12 + 14);
    t14 = (27 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t20 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 26;
    t7 = (t4 + 4U);
    *((int *)t7) = 24;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t19 = (24 - 26);
    t22 = (t19 * -1);
    t22 = (t22 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t22;
    t7 = (t0 + 7754);
    t9 = (t23 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t21 = (3 - 0);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t22;
    t2 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t1, t20, t7, t23);
    if (t2 != 0)
        goto LAB21;

LAB23:
LAB22:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2688U);
    t3 = *((char **)t1);
    t13 = (12 + 16);
    t19 = (t13 - 2);
    t14 = (27 - t19);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = xsi_get_transient_memory(27U);
    memcpy(t4, t1, 27U);
    t7 = (t0 + 2688U);
    t8 = *((char **)t7);
    t21 = (12 + 16);
    t24 = (t21 - 1);
    t22 = (27 - t24);
    t28 = (t22 * 1U);
    t29 = (0 + t28);
    t7 = (t8 + t29);
    memcpy(t7, t4, 27U);

LAB10:    t1 = (t0 + 7734);
    t17 = *((int *)t1);
    t3 = (t0 + 7738);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB11;

LAB24:    t13 = (t17 + 1);
    t17 = t13;
    t4 = (t0 + 7734);
    *((int *)t4) = t17;
    goto LAB8;

LAB12:    xsi_set_current_line(69, ng0);
    t12 = (t0 + 2688U);
    t26 = *((char **)t12);
    t27 = (12 + 3);
    t22 = (27 - t27);
    t28 = (t22 * 1U);
    t29 = (0 + t28);
    t12 = (t26 + t29);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 15;
    t32 = (t31 + 4U);
    *((int *)t32) = 12;
    t32 = (t31 + 8U);
    *((int *)t32) = -1;
    t33 = (12 - 15);
    t34 = (t33 * -1);
    t34 = (t34 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t34;
    t32 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t25, t12, t30, 3);
    t35 = (t0 + 2688U);
    t36 = *((char **)t35);
    t37 = (12 + 3);
    t34 = (27 - t37);
    t38 = (t34 * 1U);
    t39 = (0 + t38);
    t35 = (t36 + t39);
    t40 = (t25 + 12U);
    t41 = *((unsigned int *)t40);
    t42 = (1U * t41);
    memcpy(t35, t32, t42);
    goto LAB13;

LAB15:    xsi_set_current_line(73, ng0);
    t10 = (t0 + 2688U);
    t11 = *((char **)t10);
    t24 = (12 + 7);
    t22 = (27 - t24);
    t28 = (t22 * 1U);
    t29 = (0 + t28);
    t10 = (t11 + t29);
    t12 = (t30 + 0U);
    t26 = (t12 + 0U);
    *((int *)t26) = 19;
    t26 = (t12 + 4U);
    *((int *)t26) = 16;
    t26 = (t12 + 8U);
    *((int *)t26) = -1;
    t27 = (16 - 19);
    t34 = (t27 * -1);
    t34 = (t34 + 1);
    t26 = (t12 + 12U);
    *((unsigned int *)t26) = t34;
    t26 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t25, t10, t30, 3);
    t31 = (t0 + 2688U);
    t32 = *((char **)t31);
    t33 = (12 + 7);
    t34 = (27 - t33);
    t38 = (t34 * 1U);
    t39 = (0 + t38);
    t31 = (t32 + t39);
    t35 = (t25 + 12U);
    t41 = *((unsigned int *)t35);
    t42 = (1U * t41);
    memcpy(t31, t26, t42);
    goto LAB16;

LAB18:    xsi_set_current_line(77, ng0);
    t10 = (t0 + 2688U);
    t11 = *((char **)t10);
    t24 = (12 + 11);
    t22 = (27 - t24);
    t28 = (t22 * 1U);
    t29 = (0 + t28);
    t10 = (t11 + t29);
    t12 = (t30 + 0U);
    t26 = (t12 + 0U);
    *((int *)t26) = 23;
    t26 = (t12 + 4U);
    *((int *)t26) = 20;
    t26 = (t12 + 8U);
    *((int *)t26) = -1;
    t27 = (20 - 23);
    t34 = (t27 * -1);
    t34 = (t34 + 1);
    t26 = (t12 + 12U);
    *((unsigned int *)t26) = t34;
    t26 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t25, t10, t30, 3);
    t31 = (t0 + 2688U);
    t32 = *((char **)t31);
    t33 = (12 + 11);
    t34 = (27 - t33);
    t38 = (t34 * 1U);
    t39 = (0 + t38);
    t31 = (t32 + t39);
    t35 = (t25 + 12U);
    t41 = *((unsigned int *)t35);
    t42 = (1U * t41);
    memcpy(t31, t26, t42);
    goto LAB19;

LAB21:    xsi_set_current_line(81, ng0);
    t10 = (t0 + 2688U);
    t11 = *((char **)t10);
    t24 = (12 + 14);
    t22 = (27 - t24);
    t28 = (t22 * 1U);
    t29 = (0 + t28);
    t10 = (t11 + t29);
    t12 = (t30 + 0U);
    t26 = (t12 + 0U);
    *((int *)t26) = 26;
    t26 = (t12 + 4U);
    *((int *)t26) = 24;
    t26 = (t12 + 8U);
    *((int *)t26) = -1;
    t27 = (24 - 26);
    t34 = (t27 * -1);
    t34 = (t34 + 1);
    t26 = (t12 + 12U);
    *((unsigned int *)t26) = t34;
    t26 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t25, t10, t30, 3);
    t31 = (t0 + 2688U);
    t32 = *((char **)t31);
    t33 = (12 + 14);
    t34 = (27 - t33);
    t38 = (t34 * 1U);
    t39 = (0 + t38);
    t31 = (t32 + t39);
    t35 = (t25 + 12U);
    t41 = *((unsigned int *)t35);
    t42 = (1U * t41);
    memcpy(t31, t26, t42);
    goto LAB22;

}

static void work_a_3906228563_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(93, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (15 - 15);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5192);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 5000);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3906228563_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(94, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (15 - 11);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5256);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 5016);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3906228563_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(95, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (15 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5320);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 5032);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3906228563_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(96, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (15 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5384);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 5048);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3906228563_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3906228563_3212880686_p_0,(void *)work_a_3906228563_3212880686_p_1,(void *)work_a_3906228563_3212880686_p_2,(void *)work_a_3906228563_3212880686_p_3,(void *)work_a_3906228563_3212880686_p_4};
	xsi_register_didat("work_a_3906228563_3212880686", "isim/top_tb00_isim_beh.exe.sim/work/a_3906228563_3212880686.didat");
	xsi_register_executes(pe);
}
