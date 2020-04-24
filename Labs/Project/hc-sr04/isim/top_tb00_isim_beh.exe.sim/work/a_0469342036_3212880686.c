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
static const char *ng0 = "F:/projekty_de/hc-sr04/hc_sr04.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_2053728113_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0469342036_3212880686_p_0(char *t0)
{
    char t17[16];
    char t18[16];
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
    char *t14;
    char *t15;
    char *t16;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15};

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(75, ng0);
    t3 = xsi_get_transient_memory(4U);
    memset(t3, 0, 4U);
    t7 = t3;
    memset(t7, (unsigned char)2, 4U);
    t8 = (t0 + 4552);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(76, ng0);
    t1 = xsi_get_transient_memory(15U);
    memset(t1, 0, 15U);
    t3 = t1;
    memset(t3, (unsigned char)2, 15U);
    t4 = (t0 + 4616);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 4680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB10:    goto LAB6;

LAB11:    xsi_set_current_line(83, ng0);
    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t7 = (t0 + 7344U);
    t9 = (t0 + 2928U);
    t10 = *((char **)t9);
    t9 = (t0 + 7408U);
    t13 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t8, t7, t10, t9);
    if (t13 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 4744);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 4680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 7588);
    t4 = (t0 + 4552);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB18:    goto LAB10;

LAB12:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB22;

LAB24:    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 7376U);
    t4 = (t0 + 3168U);
    t7 = *((char **)t4);
    t4 = (t0 + 7440U);
    t2 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB27;

LAB28:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 7592);
    t4 = (t0 + 4808);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 4680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB10;

LAB13:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 4680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB32:    goto LAB10;

LAB14:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 7360U);
    t4 = (t0 + 3048U);
    t7 = *((char **)t4);
    t4 = (t0 + 7424U);
    t8 = ieee_p_1242562249_sub_2053728113_1035706684(IEEE_P_1242562249, t17, t3, t1, t7, t4);
    t9 = (t0 + 4872);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t8, 31U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 4680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB15:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 4680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t20 = (30 - 27);
    t21 = (t20 * 1U);
    t23 = (0 + t21);
    t1 = (t3 + t23);
    t4 = (t0 + 4936);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 7608);
    t4 = (t0 + 4616);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast(t4);
    goto LAB10;

LAB16:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 4680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB17:    xsi_set_current_line(84, ng0);
    t11 = (t0 + 4744);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 4680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 7344U);
    t4 = (t0 + 7584);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t19 = (3 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t20;
    t9 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t17, t3, t1, t4, t18);
    t10 = (t17 + 12U);
    t20 = *((unsigned int *)t10);
    t21 = (1U * t20);
    t2 = (4U != t21);
    if (t2 == 1)
        goto LAB20;

LAB21:    t11 = (t0 + 4552);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t9, 4U);
    xsi_driver_first_trans_fast(t11);
    goto LAB18;

LAB20:    xsi_size_not_matching(4U, t21, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t1 = (t0 + 7360U);
    t7 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t4, t1, 1);
    t8 = (t17 + 12U);
    t20 = *((unsigned int *)t8);
    t21 = (1U * t20);
    t6 = (15U != t21);
    if (t6 == 1)
        goto LAB25;

LAB26:    t9 = (t0 + 4616);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t7, 15U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    xsi_size_not_matching(15U, t21, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(98, ng0);
    t8 = (t0 + 2312U);
    t9 = *((char **)t8);
    t8 = (t0 + 7376U);
    t10 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t9, t8, 1);
    t11 = (t17 + 12U);
    t20 = *((unsigned int *)t11);
    t21 = (1U * t20);
    t5 = (16U != t21);
    if (t5 == 1)
        goto LAB29;

LAB30:    t12 = (t0 + 4808);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t22 = *((char **)t16);
    memcpy(t22, t10, 16U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 4680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB29:    xsi_size_not_matching(16U, t21, 0);
    goto LAB30;

LAB31:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 4680);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 7360U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t7 = (t17 + 12U);
    t20 = *((unsigned int *)t7);
    t21 = (1U * t20);
    t2 = (15U != t21);
    if (t2 == 1)
        goto LAB34;

LAB35:    t8 = (t0 + 4616);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 15U);
    xsi_driver_first_trans_fast(t8);
    goto LAB32;

LAB34:    xsi_size_not_matching(15U, t21, 0);
    goto LAB35;

}


extern void work_a_0469342036_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0469342036_3212880686_p_0};
	xsi_register_didat("work_a_0469342036_3212880686", "isim/top_tb00_isim_beh.exe.sim/work/a_0469342036_3212880686.didat");
	xsi_register_executes(pe);
}
