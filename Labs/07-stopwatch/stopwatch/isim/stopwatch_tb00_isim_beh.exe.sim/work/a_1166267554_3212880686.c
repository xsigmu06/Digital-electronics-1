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
static const char *ng0 = "/home/ise/xsigmu06/07/stopwatch/stopwatch_counter.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1434214030532753770_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1166267554_3212880686_p_0(char *t0)
{
    char t15[16];
    char t19[16];
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
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(32, ng0);
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

LAB5:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 9468);
    t8 = (t0 + 6192);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2312U);
    t7 = *((char **)t1);
    t1 = (t0 + 9376U);
    t8 = (t0 + 9472);
    t10 = (t15 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 3;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t18 = ieee_p_1242562249_sub_1434214030532753770_1035706684(IEEE_P_1242562249, t7, t1, t8, t15);
    if (t18 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 9476);
    t4 = (t0 + 6192);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB14:    goto LAB6;

LAB10:    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB12;

LAB13:    xsi_set_current_line(36, ng0);
    t11 = (t0 + 2312U);
    t12 = *((char **)t11);
    t11 = (t0 + 9376U);
    t20 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t19, t12, t11, 1);
    t21 = (t19 + 12U);
    t17 = *((unsigned int *)t21);
    t22 = (1U * t17);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB16;

LAB17:    t24 = (t0 + 6192);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t20, 4U);
    xsi_driver_first_trans_fast(t24);
    goto LAB14;

LAB16:    xsi_size_not_matching(4U, t22, 0);
    goto LAB17;

}

static void work_a_1166267554_3212880686_p_1(char *t0)
{
    char t13[16];
    char t18[16];
    char t23[16];
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
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t19;
    char *t20;
    int t21;
    unsigned char t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6016);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
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

LAB5:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 9480);
    t8 = (t0 + 6256);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(53, ng0);
    t10 = (t0 + 2472U);
    t11 = *((char **)t10);
    t10 = (t0 + 9392U);
    t12 = (t0 + 9488);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 3;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (3 - 0);
    t15 = (t21 * 1);
    t15 = (t15 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t15;
    t22 = ieee_p_1242562249_sub_1434214030532753770_1035706684(IEEE_P_1242562249, t11, t10, t12, t18);
    if (t22 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 9492);
    t4 = (t0 + 6256);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB14:    goto LAB6;

LAB10:    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 9376U);
    t7 = (t0 + 9484);
    t9 = (t13 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t16 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t4, t1, t7, t13);
    t2 = t16;
    goto LAB12;

LAB13:    xsi_set_current_line(54, ng0);
    t20 = (t0 + 2472U);
    t24 = *((char **)t20);
    t20 = (t0 + 9392U);
    t25 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t23, t24, t20, 1);
    t26 = (t23 + 12U);
    t15 = *((unsigned int *)t26);
    t27 = (1U * t15);
    t28 = (4U != t27);
    if (t28 == 1)
        goto LAB16;

LAB17:    t29 = (t0 + 6256);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t25, 4U);
    xsi_driver_first_trans_fast(t29);
    goto LAB14;

LAB16:    xsi_size_not_matching(4U, t27, 0);
    goto LAB17;

}

static void work_a_1166267554_3212880686_p_2(char *t0)
{
    char t14[16];
    char t19[16];
    char t27[16];
    char t32[16];
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
    int t15;
    unsigned int t16;
    unsigned char t17;
    char *t20;
    char *t21;
    int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t28;
    char *t29;
    int t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6032);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t6 = *((unsigned char *)t3);
    t13 = (t6 == (unsigned char)3);
    if (t13 == 1)
        goto LAB13;

LAB14:    t5 = (unsigned char)0;

LAB15:    if (t5 == 1)
        goto LAB10;

LAB11:    t2 = (unsigned char)0;

LAB12:    if (t2 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 9496);
    t8 = (t0 + 6320);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(70, ng0);
    t21 = (t0 + 2632U);
    t24 = *((char **)t21);
    t21 = (t0 + 9408U);
    t25 = (t0 + 9508);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 0;
    t29 = (t28 + 4U);
    *((int *)t29) = 3;
    t29 = (t28 + 8U);
    *((int *)t29) = 1;
    t30 = (3 - 0);
    t16 = (t30 * 1);
    t16 = (t16 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t16;
    t31 = ieee_p_1242562249_sub_1434214030532753770_1035706684(IEEE_P_1242562249, t24, t21, t25, t27);
    if (t31 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 9512);
    t4 = (t0 + 6320);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB17:    goto LAB6;

LAB10:    t10 = (t0 + 2312U);
    t11 = *((char **)t10);
    t10 = (t0 + 9376U);
    t12 = (t0 + 9504);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 3;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (3 - 0);
    t16 = (t22 * 1);
    t16 = (t16 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t16;
    t23 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t11, t10, t12, t19);
    t2 = t23;
    goto LAB12;

LAB13:    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 9392U);
    t7 = (t0 + 9500);
    t9 = (t14 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t16;
    t17 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t4, t1, t7, t14);
    t5 = t17;
    goto LAB15;

LAB16:    xsi_set_current_line(71, ng0);
    t29 = (t0 + 2632U);
    t33 = *((char **)t29);
    t29 = (t0 + 9408U);
    t34 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t32, t33, t29, 1);
    t35 = (t32 + 12U);
    t16 = *((unsigned int *)t35);
    t36 = (1U * t16);
    t37 = (4U != t36);
    if (t37 == 1)
        goto LAB19;

LAB20:    t38 = (t0 + 6320);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t34, 4U);
    xsi_driver_first_trans_fast(t38);
    goto LAB17;

LAB19:    xsi_size_not_matching(4U, t36, 0);
    goto LAB20;

}

static void work_a_1166267554_3212880686_p_3(char *t0)
{
    char t15[16];
    char t20[16];
    char t28[16];
    char t36[16];
    char t41[16];
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
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t21;
    char *t22;
    int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t29;
    char *t30;
    int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t37;
    char *t38;
    int t39;
    unsigned char t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6048);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t13 = *((unsigned char *)t3);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB16;

LAB17:    t6 = (unsigned char)0;

LAB18:    if (t6 == 1)
        goto LAB13;

LAB14:    t5 = (unsigned char)0;

LAB15:    if (t5 == 1)
        goto LAB10;

LAB11:    t2 = (unsigned char)0;

LAB12:    if (t2 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 9516);
    t8 = (t0 + 6384);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(87, ng0);
    t30 = (t0 + 2792U);
    t33 = *((char **)t30);
    t30 = (t0 + 9424U);
    t34 = (t0 + 9532);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 0;
    t38 = (t37 + 4U);
    *((int *)t38) = 3;
    t38 = (t37 + 8U);
    *((int *)t38) = 1;
    t39 = (3 - 0);
    t17 = (t39 * 1);
    t17 = (t17 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t17;
    t40 = ieee_p_1242562249_sub_1434214030532753770_1035706684(IEEE_P_1242562249, t33, t30, t34, t36);
    if (t40 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 9536);
    t4 = (t0 + 6384);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB20:    goto LAB6;

LAB10:    t22 = (t0 + 2472U);
    t25 = *((char **)t22);
    t22 = (t0 + 9392U);
    t26 = (t0 + 9528);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 0;
    t30 = (t29 + 4U);
    *((int *)t30) = 3;
    t30 = (t29 + 8U);
    *((int *)t30) = 1;
    t31 = (3 - 0);
    t17 = (t31 * 1);
    t17 = (t17 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t17;
    t32 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t25, t22, t26, t28);
    t2 = t32;
    goto LAB12;

LAB13:    t10 = (t0 + 2312U);
    t11 = *((char **)t10);
    t10 = (t0 + 9376U);
    t12 = (t0 + 9524);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 3;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (3 - 0);
    t17 = (t23 * 1);
    t17 = (t17 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t17;
    t24 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t11, t10, t12, t20);
    t5 = t24;
    goto LAB15;

LAB16:    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 9392U);
    t7 = (t0 + 9520);
    t9 = (t15 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t17;
    t18 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t4, t1, t7, t15);
    t6 = t18;
    goto LAB18;

LAB19:    xsi_set_current_line(88, ng0);
    t38 = (t0 + 2792U);
    t42 = *((char **)t38);
    t38 = (t0 + 9424U);
    t43 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t41, t42, t38, 1);
    t44 = (t41 + 12U);
    t17 = *((unsigned int *)t44);
    t45 = (1U * t17);
    t46 = (4U != t45);
    if (t46 == 1)
        goto LAB22;

LAB23:    t47 = (t0 + 6384);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t43, 4U);
    xsi_driver_first_trans_fast(t47);
    goto LAB20;

LAB22:    xsi_size_not_matching(4U, t45, 0);
    goto LAB23;

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

LAB0:    xsi_set_current_line(98, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 6448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6064);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1166267554_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(99, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 6512);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6080);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1166267554_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(100, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6576);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6096);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1166267554_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(101, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6640);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6112);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1166267554_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1166267554_3212880686_p_0,(void *)work_a_1166267554_3212880686_p_1,(void *)work_a_1166267554_3212880686_p_2,(void *)work_a_1166267554_3212880686_p_3,(void *)work_a_1166267554_3212880686_p_4,(void *)work_a_1166267554_3212880686_p_5,(void *)work_a_1166267554_3212880686_p_6,(void *)work_a_1166267554_3212880686_p_7};
	xsi_register_didat("work_a_1166267554_3212880686", "isim/stopwatch_tb00_isim_beh.exe.sim/work/a_1166267554_3212880686.didat");
	xsi_register_executes(pe);
}
