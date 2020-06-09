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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//VBoxSvr/ra/ambaspi/tb_top.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {172U, 0U};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {60U, 0U};
static unsigned int ng6[] = {53U, 0U};



static int sp_write(char *t1, char *t2)
{
    char t21[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 484);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);

LAB6:    t5 = (t1 + 2168);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB8;

LAB7:    t14 = (t2 + 48U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    xsi_wp_set_status(t16, 1);
    t17 = (t2 + 28U);
    *((char **)t17) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB8:    t18 = (t2 + 48U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    xsi_wp_set_status(t20, 0);
    xsi_set_current_line(72, ng0);
    t4 = (t1 + 3088);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memcpy(t21, t6, 8);
    t7 = (t1 + 2444);
    xsi_vlogvar_wait_assign_value(t7, t21, 0, 0, 16, 0LL);
    xsi_set_current_line(73, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2628);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2352);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t4 = (t1 + 3180);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memcpy(t21, t6, 8);
    t7 = (t1 + 2720);
    xsi_vlogvar_wait_assign_value(t7, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 4000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(78, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 2536);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);

LAB10:    t4 = (t1 + 1940U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB12;

LAB11:    t6 = (t2 + 48U);
    t7 = *((char **)t6);
    t8 = (t7 + 8U);
    xsi_wp_set_status(t8, 1);
    t14 = (t2 + 28U);
    *((char **)t14) = &&LAB10;
    goto LAB1;

LAB12:    t15 = (t2 + 48U);
    t16 = *((char **)t15);
    t17 = (t16 + 8U);
    xsi_wp_set_status(t17, 0);
    xsi_set_current_line(81, ng0);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 4000LL);
    *((char **)t3) = &&LAB13;
    t0 = 1;
    goto LAB1;

LAB13:    xsi_set_current_line(82, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 2536);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2352);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB4;

}

static int sp_read(char *t1, char *t2)
{
    char t21[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t22;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 740);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(90, ng0);

LAB5:    xsi_set_current_line(91, ng0);

LAB6:    t5 = (t1 + 2168);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB8;

LAB7:    t14 = (t2 + 48U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    xsi_wp_set_status(t16, 1);
    t17 = (t2 + 28U);
    *((char **)t17) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB8:    t18 = (t2 + 48U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    xsi_wp_set_status(t20, 0);
    xsi_set_current_line(92, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2444);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(93, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2628);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2352);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 4000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(97, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 2536);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);

LAB10:    t4 = (t1 + 1940U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB12;

LAB11:    t6 = (t2 + 48U);
    t7 = *((char **)t6);
    t8 = (t7 + 8U);
    xsi_wp_set_status(t8, 1);
    t14 = (t2 + 28U);
    *((char **)t14) = &&LAB10;
    goto LAB1;

LAB12:    t15 = (t2 + 48U);
    t16 = *((char **)t15);
    t17 = (t16 + 8U);
    xsi_wp_set_status(t17, 0);
    xsi_set_current_line(99, ng0);
    t4 = (t1 + 1204U);
    t5 = *((char **)t4);
    memset(t21, 0, 8);
    t4 = (t21 + 4);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t13 & 255U);
    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 255U);
    t7 = (t1 + 2812);
    xsi_vlogvar_wait_assign_value(t7, t21, 0, 0, 8, 0LL);
    xsi_set_current_line(101, ng0);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 4000LL);
    *((char **)t3) = &&LAB13;
    t0 = 1;
    goto LAB1;

LAB13:    xsi_set_current_line(102, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 2536);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2352);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB4;

}

static void Always_110_0(char *t0)
{
    char t4[8];
    char t29[8];
    char t33[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 3704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4364);
    *((int *)t2) = 1;
    t3 = (t0 + 3732);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(110, ng0);

LAB5:    xsi_set_current_line(111, ng0);
    t5 = (t0 + 1388U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(111, ng0);

LAB15:    xsi_set_current_line(112, ng0);
    t30 = (t0 + 2904);
    t31 = (t30 + 36U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t35 = (t32 + 4);
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 7);
    t38 = (t37 & 1);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 7);
    t41 = (t40 & 1);
    *((unsigned int *)t34) = t41;
    t43 = (t0 + 2904);
    t44 = (t43 + 36U);
    t45 = *((char **)t44);
    memset(t42, 0, 8);
    t46 = (t42 + 4);
    t47 = (t45 + 4);
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 0);
    *((unsigned int *)t42) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 0);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t52 & 127U);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 & 127U);
    xsi_vlogtype_concat(t29, 8, 8, 2U, t42, 7, t33, 1);
    t54 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t54, t29, 0, 0, 8, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 2996);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    memset(t29, 0, 8);
    t12 = (t29 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t29) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t11 & 127U);
    t15 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t15 & 127U);
    xsi_vlogtype_concat(t4, 8, 8, 2U, t29, 7, t3, 1);
    t14 = (t0 + 2996);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 8, 0LL);
    goto LAB14;

}

static void Cont_117_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 4424);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 4372);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_119_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3892);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);
    t4 = (t0 + 2168);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2168);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_123_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);

LAB4:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2260);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2444);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2628);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4036);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2260);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4036);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4036);
    t5 = (t0 + 484);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3088);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3180);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB9:    t9 = (t0 + 4088);
    t10 = *((char **)t9);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = (t12 + 148U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB11:    if (t17 != 0)
        goto LAB12;

LAB7:    t10 = (t0 + 484);
    xsi_vlog_subprogram_popinvocation(t10);

LAB8:    t18 = (t0 + 4088);
    t19 = *((char **)t18);
    t18 = (t0 + 484);
    t20 = (t0 + 4036);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4036);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:;
LAB12:    t9 = (t0 + 4136U);
    *((char **)t9) = &&LAB9;
    goto LAB1;

LAB13:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 4036);
    t5 = (t0 + 484);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3088);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3180);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB16:    t9 = (t0 + 4088);
    t10 = *((char **)t9);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = (t12 + 148U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB18:    if (t17 != 0)
        goto LAB19;

LAB14:    t10 = (t0 + 484);
    xsi_vlog_subprogram_popinvocation(t10);

LAB15:    t18 = (t0 + 4088);
    t19 = *((char **)t18);
    t18 = (t0 + 484);
    t20 = (t0 + 4036);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(143, ng0);

LAB20:    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t22 = *((unsigned int *)t2);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB22;

LAB21:    t4 = (t0 + 4380);
    *((int *)t4) = 1;
    t5 = (t0 + 4136U);
    *((char **)t5) = &&LAB20;
    goto LAB1;

LAB17:;
LAB19:    t9 = (t0 + 4136U);
    *((char **)t9) = &&LAB16;
    goto LAB1;

LAB22:    t6 = (t0 + 4380);
    *((int *)t6) = 0;
    xsi_set_current_line(144, ng0);
    t7 = (t0 + 4036);
    t8 = (t0 + 740);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);

LAB25:    t10 = (t0 + 4088);
    t11 = *((char **)t10);
    t12 = (t11 + 44U);
    t13 = *((char **)t12);
    t14 = (t13 + 148U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t18 = *((char **)t16);
    t17 = ((int  (*)(char *, char *))t18)(t0, t11);

LAB27:    if (t17 != 0)
        goto LAB28;

LAB23:    t11 = (t0 + 740);
    xsi_vlog_subprogram_popinvocation(t11);

LAB24:    t19 = (t0 + 4088);
    t20 = *((char **)t19);
    t19 = (t0 + 740);
    t21 = (t0 + 4036);
    t27 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t27);
    goto LAB1;

LAB26:;
LAB28:    t10 = (t0 + 4136U);
    *((char **)t10) = &&LAB25;
    goto LAB1;

}


extern void work_m_00000000000296831413_3622719947_init()
{
	static char *pe[] = {(void *)Always_110_0,(void *)Cont_117_1,(void *)Always_119_2,(void *)Initial_123_3};
	static char *se[] = {(void *)sp_write,(void *)sp_read};
	xsi_register_didat("work_m_00000000000296831413_3622719947", "isim/tb_top_isim_beh.exe.sim/work/m_00000000000296831413_3622719947.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
