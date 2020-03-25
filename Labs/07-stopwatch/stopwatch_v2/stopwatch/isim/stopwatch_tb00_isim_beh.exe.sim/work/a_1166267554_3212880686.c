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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/xsigmu06/07-stopwatch_v2/stopwatch/stopwatch_counter.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3307759752501467860_1035706684(char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1166267554_3212880686_p_0(char *t0)
{
    char t16[16];
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
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5256);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = (unsigned char)0;

LAB12:    if (t2 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(27, ng0);
    t3 = xsi_get_transient_memory(4U);
    memset(t3, 0, 4U);
    t7 = t3;
    memset(t7, (unsigned char)2, 4U);
    t8 = (t0 + 5400);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(28, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t3 = t1;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 5464);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(29, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t3 = t1;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 5528);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(30, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t3 = t1;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 5592);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2312U);
    t7 = *((char **)t1);
    t1 = (t0 + 8640U);
    t15 = ieee_p_1242562249_sub_3307759752501467860_1035706684(IEEE_P_1242562249, t7, t1, 9);
    if (t15 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(35, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t3 = t1;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 5400);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 8640U);
    t2 = ieee_p_1242562249_sub_3307759752501467860_1035706684(IEEE_P_1242562249, t3, t1, 9);
    if (t2 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(39, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t3 = t1;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 5464);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 8640U);
    t2 = ieee_p_1242562249_sub_3307759752501467860_1035706684(IEEE_P_1242562249, t3, t1, 9);
    if (t2 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(43, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t3 = t1;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 5528);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 8640U);
    t2 = ieee_p_1242562249_sub_3307759752501467860_1035706684(IEEE_P_1242562249, t3, t1, 5);
    if (t2 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(47, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t3 = t1;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 5400);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(48, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t3 = t1;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 5464);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(49, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t3 = t1;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 5528);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(50, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t3 = t1;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 5592);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB29:
LAB24:
LAB19:
LAB14:    goto LAB6;

LAB10:    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB12;

LAB13:    xsi_set_current_line(33, ng0);
    t8 = (t0 + 2312U);
    t9 = *((char **)t8);
    t8 = (t0 + 8640U);
    t10 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t16, t9, t8, 1);
    t11 = (t16 + 12U);
    t17 = *((unsigned int *)t11);
    t18 = (1U * t17);
    t19 = (4U != t18);
    if (t19 == 1)
        goto LAB16;

LAB17:    t12 = (t0 + 5400);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t10, 4U);
    xsi_driver_first_trans_fast(t12);
    goto LAB14;

LAB16:    xsi_size_not_matching(4U, t18, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2472U);
    t7 = *((char **)t4);
    t4 = (t0 + 8640U);
    t8 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t16, t7, t4, 1);
    t9 = (t16 + 12U);
    t17 = *((unsigned int *)t9);
    t18 = (1U * t17);
    t5 = (4U != t18);
    if (t5 == 1)
        goto LAB21;

LAB22:    t10 = (t0 + 5464);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB19;

LAB21:    xsi_size_not_matching(4U, t18, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2632U);
    t7 = *((char **)t4);
    t4 = (t0 + 8640U);
    t8 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t16, t7, t4, 1);
    t9 = (t16 + 12U);
    t17 = *((unsigned int *)t9);
    t18 = (1U * t17);
    t5 = (4U != t18);
    if (t5 == 1)
        goto LAB26;

LAB27:    t10 = (t0 + 5528);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB24;

LAB26:    xsi_size_not_matching(4U, t18, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 2792U);
    t7 = *((char **)t4);
    t4 = (t0 + 8640U);
    t8 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t16, t7, t4, 1);
    t9 = (t16 + 12U);
    t17 = *((unsigned int *)t9);
    t18 = (1U * t17);
    t5 = (4U != t18);
    if (t5 == 1)
        goto LAB31;

LAB32:    t10 = (t0 + 5592);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB29;

LAB31:    xsi_size_not_matching(4U, t18, 0);
    goto LAB32;

}

static void work_a_1166267554_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(59, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5656);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5272);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1166267554_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(60, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5720);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5288);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1166267554_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(61, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5304);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1166267554_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(62, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 5848);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5320);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1166267554_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1166267554_3212880686_p_0,(void *)work_a_1166267554_3212880686_p_1,(void *)work_a_1166267554_3212880686_p_2,(void *)work_a_1166267554_3212880686_p_3,(void *)work_a_1166267554_3212880686_p_4};
	xsi_register_didat("work_a_1166267554_3212880686", "isim/stopwatch_tb00_isim_beh.exe.sim/work/a_1166267554_3212880686.didat");
	xsi_register_executes(pe);
}
