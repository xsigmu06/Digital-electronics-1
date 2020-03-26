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
static const char *ng0 = "F:/projekty_de/traffic_lights/traffic_lights.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1894529253_3212880686_p_0(char *t0)
{
    char t17[16];
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
    unsigned int t18;
    unsigned int t19;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16};

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(39, ng0);
    t3 = xsi_get_transient_memory(4U);
    memset(t3, 0, 4U);
    t7 = t3;
    memset(t7, (unsigned char)2, 4U);
    t8 = (t0 + 3896);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 3960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB10:    goto LAB6;

LAB11:    xsi_set_current_line(44, ng0);
    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t7 = (t0 + 6272U);
    t9 = (t0 + 2128U);
    t10 = *((char **)t9);
    t9 = (t0 + 6288U);
    t13 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t8, t7, t10, t9);
    if (t13 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 3960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 6344);
    t4 = (t0 + 3896);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB19:    goto LAB10;

LAB12:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6272U);
    t4 = (t0 + 2248U);
    t7 = *((char **)t4);
    t4 = (t0 + 6304U);
    t2 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 6348);
    t4 = (t0 + 3896);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB24:    goto LAB10;

LAB13:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6272U);
    t4 = (t0 + 2248U);
    t7 = *((char **)t4);
    t4 = (t0 + 6304U);
    t2 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 6352);
    t4 = (t0 + 3896);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB29:    goto LAB10;

LAB14:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6272U);
    t4 = (t0 + 2128U);
    t7 = *((char **)t4);
    t4 = (t0 + 6288U);
    t2 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 6356);
    t4 = (t0 + 3896);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB34:    goto LAB10;

LAB15:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6272U);
    t4 = (t0 + 2248U);
    t7 = *((char **)t4);
    t4 = (t0 + 6304U);
    t2 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 6360);
    t4 = (t0 + 3896);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB39:    goto LAB10;

LAB16:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6272U);
    t4 = (t0 + 2248U);
    t7 = *((char **)t4);
    t4 = (t0 + 6304U);
    t2 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB43;

LAB45:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 3960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 6364);
    t4 = (t0 + 3896);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB44:    goto LAB10;

LAB17:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB18:    xsi_set_current_line(45, ng0);
    t11 = (t0 + 3960);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)0;
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6272U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t7 = (t17 + 12U);
    t18 = *((unsigned int *)t7);
    t19 = (1U * t18);
    t2 = (4U != t19);
    if (t2 == 1)
        goto LAB21;

LAB22:    t8 = (t0 + 3896);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB19;

LAB21:    xsi_size_not_matching(4U, t19, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(53, ng0);
    t8 = (t0 + 3960);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6272U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t7 = (t17 + 12U);
    t18 = *((unsigned int *)t7);
    t19 = (1U * t18);
    t2 = (4U != t19);
    if (t2 == 1)
        goto LAB26;

LAB27:    t8 = (t0 + 3896);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB24;

LAB26:    xsi_size_not_matching(4U, t19, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(61, ng0);
    t8 = (t0 + 3960);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6272U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t7 = (t17 + 12U);
    t18 = *((unsigned int *)t7);
    t19 = (1U * t18);
    t2 = (4U != t19);
    if (t2 == 1)
        goto LAB31;

LAB32:    t8 = (t0 + 3896);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB29;

LAB31:    xsi_size_not_matching(4U, t19, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(69, ng0);
    t8 = (t0 + 3960);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6272U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t7 = (t17 + 12U);
    t18 = *((unsigned int *)t7);
    t19 = (1U * t18);
    t2 = (4U != t19);
    if (t2 == 1)
        goto LAB36;

LAB37:    t8 = (t0 + 3896);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB34;

LAB36:    xsi_size_not_matching(4U, t19, 0);
    goto LAB37;

LAB38:    xsi_set_current_line(77, ng0);
    t8 = (t0 + 3960);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)4;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6272U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t7 = (t17 + 12U);
    t18 = *((unsigned int *)t7);
    t19 = (1U * t18);
    t2 = (4U != t19);
    if (t2 == 1)
        goto LAB41;

LAB42:    t8 = (t0 + 3896);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB39;

LAB41:    xsi_size_not_matching(4U, t19, 0);
    goto LAB42;

LAB43:    xsi_set_current_line(85, ng0);
    t8 = (t0 + 3960);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)5;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6272U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t7 = (t17 + 12U);
    t18 = *((unsigned int *)t7);
    t19 = (1U * t18);
    t2 = (4U != t19);
    if (t2 == 1)
        goto LAB46;

LAB47:    t8 = (t0 + 3896);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB44;

LAB46:    xsi_size_not_matching(4U, t19, 0);
    goto LAB47;

}

static void work_a_1894529253_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8};

LAB0:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 3816);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 6368);
    t6 = (t0 + 4024);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 6U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB4:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 6374);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB5:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 6380);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB6:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 6386);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB7:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 6392);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB8:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 6398);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB9:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 6404);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

}


extern void work_a_1894529253_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1894529253_3212880686_p_0,(void *)work_a_1894529253_3212880686_p_1};
	xsi_register_didat("work_a_1894529253_3212880686", "isim/top_tb00_isim_beh.exe.sim/work/a_1894529253_3212880686.didat");
	xsi_register_executes(pe);
}
