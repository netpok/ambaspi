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
static unsigned int ng3[] = {0U, 1U};
static unsigned int ng4[] = {172U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {60U, 0U};
static unsigned int ng7[] = {53U, 0U};
static unsigned int ng8[] = {227U, 0U};
static unsigned int ng9[] = {119U, 0U};
static unsigned int ng10[] = {107U, 0U};



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

LAB2:    t4 = (t1 + 564);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);

LAB6:    t5 = (t1 + 2248);
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
    xsi_set_current_line(51, ng0);
    t4 = (t1 + 3168);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memcpy(t21, t6, 8);
    t7 = (t1 + 2524);
    xsi_vlogvar_wait_assign_value(t7, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2708);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2432);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t4 = (t1 + 3260);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memcpy(t21, t6, 8);
    t7 = (t1 + 2800);
    xsi_vlogvar_wait_assign_value(t7, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(56, ng0);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 62500LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(57, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 2616);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);

LAB10:    t4 = (t1 + 2020U);
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
    xsi_set_current_line(60, ng0);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 62500LL);
    *((char **)t3) = &&LAB13;
    t0 = 1;
    goto LAB1;

LAB13:    xsi_set_current_line(61, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 2616);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2432);
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

LAB2:    t4 = (t1 + 820);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);

LAB6:    t5 = (t1 + 2248);
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
    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2524);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2708);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2432);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 62500LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(76, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 2616);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);

LAB10:    t4 = (t1 + 2020U);
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
    xsi_set_current_line(78, ng0);
    t4 = (t1 + 1284U);
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
    t7 = (t1 + 2892);
    xsi_vlogvar_wait_assign_value(t7, t21, 0, 0, 8, 0LL);
    xsi_set_current_line(80, ng0);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 62500LL);
    *((char **)t3) = &&LAB13;
    t0 = 1;
    goto LAB1;

LAB13:    xsi_set_current_line(81, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 2616);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2432);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB4;

}

static void Always_89_0(char *t0)
{
    char t4[8];
    char t23[8];
    char t42[8];
    char t76[8];
    char t80[8];
    char t89[8];
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
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;

LAB0:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4444);
    *((int *)t2) = 1;
    t3 = (t0 + 3812);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t5 = (t0 + 1468U);
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
    t24 = (t0 + 1652U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t25 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t25);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t24) == 0)
        goto LAB12;

LAB14:    t31 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t31) = 1;

LAB15:    t32 = (t23 + 4);
    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (~(t34));
    *((unsigned int *)t23) = t35;
    *((unsigned int *)t32) = 0;
    if (*((unsigned int *)t33) != 0)
        goto LAB17;

LAB16:    t40 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t40 & 1U);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t41 & 1U);
    t43 = *((unsigned int *)t4);
    t44 = *((unsigned int *)t23);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = (t4 + 4);
    t47 = (t23 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB18;

LAB19:
LAB20:    t70 = (t42 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t42);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB17:    t36 = *((unsigned int *)t23);
    t37 = *((unsigned int *)t33);
    *((unsigned int *)t23) = (t36 | t37);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t33);
    *((unsigned int *)t32) = (t38 | t39);
    goto LAB16;

LAB18:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t4 + 4);
    t57 = (t23 + 4);
    t58 = *((unsigned int *)t56);
    t59 = (~(t58));
    t60 = *((unsigned int *)t4);
    t61 = (t60 & t59);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t23);
    t65 = (t64 & t63);
    t66 = (~(t61));
    t67 = (~(t65));
    t68 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t68 & t66);
    t69 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t69 & t67);
    goto LAB20;

LAB21:    xsi_set_current_line(90, ng0);

LAB24:    xsi_set_current_line(91, ng0);
    t77 = (t0 + 2984);
    t78 = (t77 + 36U);
    t79 = *((char **)t78);
    memset(t80, 0, 8);
    t81 = (t80 + 4);
    t82 = (t79 + 4);
    t83 = *((unsigned int *)t79);
    t84 = (t83 >> 7);
    t85 = (t84 & 1);
    *((unsigned int *)t80) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 >> 7);
    t88 = (t87 & 1);
    *((unsigned int *)t81) = t88;
    t90 = (t0 + 2984);
    t91 = (t90 + 36U);
    t92 = *((char **)t91);
    memset(t89, 0, 8);
    t93 = (t89 + 4);
    t94 = (t92 + 4);
    t95 = *((unsigned int *)t92);
    t96 = (t95 >> 0);
    *((unsigned int *)t89) = t96;
    t97 = *((unsigned int *)t94);
    t98 = (t97 >> 0);
    *((unsigned int *)t93) = t98;
    t99 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t99 & 127U);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t100 & 127U);
    xsi_vlogtype_concat(t76, 8, 8, 2U, t89, 7, t80, 1);
    t101 = (t0 + 2984);
    xsi_vlogvar_wait_assign_value(t101, t76, 0, 0, 8, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1744U);
    t3 = *((char **)t2);
    t2 = (t0 + 3076);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    memset(t23, 0, 8);
    t12 = (t23 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t23) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t11 & 127U);
    t15 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t15 & 127U);
    xsi_vlogtype_concat(t4, 8, 8, 2U, t23, 7, t3, 1);
    t14 = (t0 + 3076);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 8, 0LL);
    goto LAB23;

}

static void Cont_96_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t57[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1468U);
    t5 = *((char **)t2);
    t2 = (t0 + 1652U);
    t6 = *((char **)t2);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t2 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t4, 0, 8);
    t38 = (t7 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t38) != 0)
        goto LAB9;

LAB10:    t45 = (t4 + 4);
    t46 = *((unsigned int *)t4);
    t47 = *((unsigned int *)t45);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB11;

LAB12:    t50 = *((unsigned int *)t4);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t45) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) > 0)
        goto LAB17;

LAB18:    memcpy(t3, t57, 8);

LAB19:    t66 = (t0 + 4512);
    t67 = (t66 + 32U);
    t68 = *((char **)t67);
    t69 = (t68 + 40U);
    t70 = *((char **)t69);
    memset(t70, 0, 8);
    t71 = 1U;
    t72 = t71;
    t73 = (t3 + 4);
    t74 = *((unsigned int *)t3);
    t71 = (t71 & t74);
    t75 = *((unsigned int *)t73);
    t72 = (t72 & t75);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t77 | t71);
    t78 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t78 | t72);
    xsi_driver_vfirst_trans(t66, 0, 0);
    t79 = (t0 + 4452);
    *((int *)t79) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB6;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t44 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB10;

LAB11:    t49 = ((char*)((ng3)));
    goto LAB12;

LAB13:    t54 = (t0 + 2984);
    t55 = (t54 + 36U);
    t56 = *((char **)t55);
    memset(t57, 0, 8);
    t58 = (t57 + 4);
    t59 = (t56 + 4);
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 0);
    t62 = (t61 & 1);
    *((unsigned int *)t57) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 >> 0);
    t65 = (t64 & 1);
    *((unsigned int *)t58) = t65;
    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 1, t49, 1, t57, 1);
    goto LAB19;

LAB17:    memcpy(t3, t49, 8);
    goto LAB19;

}

static void Always_98_2(char *t0)
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

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3972);
    xsi_process_wait(t2, 31250LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 2248);
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
    t24 = (t0 + 2248);
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

static void Initial_102_3(char *t0)
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
    char *t28;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);

LAB4:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2340);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2524);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2708);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4116);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2340);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 4116);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 4116);
    t5 = (t0 + 564);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3168);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3260);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB9:    t9 = (t0 + 4168);
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

LAB7:    t10 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t10);

LAB8:    t18 = (t0 + 4168);
    t19 = *((char **)t18);
    t18 = (t0 + 564);
    t20 = (t0 + 4116);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4116);
    xsi_process_wait(t2, 62500LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:;
LAB12:    t9 = (t0 + 4216U);
    *((char **)t9) = &&LAB9;
    goto LAB1;

LAB13:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4116);
    t5 = (t0 + 564);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3168);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3260);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB16:    t9 = (t0 + 4168);
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

LAB14:    t10 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t10);

LAB15:    t18 = (t0 + 4168);
    t19 = *((char **)t18);
    t18 = (t0 + 564);
    t20 = (t0 + 4116);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(122, ng0);

LAB20:    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t22 = *((unsigned int *)t2);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB22;

LAB21:    t4 = (t0 + 4460);
    *((int *)t4) = 1;
    t5 = (t0 + 4216U);
    *((char **)t5) = &&LAB20;
    goto LAB1;

LAB17:;
LAB19:    t9 = (t0 + 4216U);
    *((char **)t9) = &&LAB16;
    goto LAB1;

LAB22:    t6 = (t0 + 4460);
    *((int *)t6) = 0;
    xsi_set_current_line(123, ng0);
    t7 = (t0 + 4116);
    xsi_process_wait(t7, 62500LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(124, ng0);
    t8 = (t0 + 4116);
    t9 = (t0 + 820);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);

LAB26:    t11 = (t0 + 4168);
    t12 = *((char **)t11);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t15 = (t14 + 148U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB28:    if (t17 != 0)
        goto LAB29;

LAB24:    t12 = (t0 + 820);
    xsi_vlog_subprogram_popinvocation(t12);

LAB25:    t20 = (t0 + 4168);
    t21 = *((char **)t20);
    t20 = (t0 + 820);
    t27 = (t0 + 4116);
    t28 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t27, t28);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4116);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB27:;
LAB29:    t11 = (t0 + 4216U);
    *((char **)t11) = &&LAB26;
    goto LAB1;

LAB30:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4116);
    t5 = (t0 + 564);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3168);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3260);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB33:    t9 = (t0 + 4168);
    t10 = *((char **)t9);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = (t12 + 148U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB35:    if (t17 != 0)
        goto LAB36;

LAB31:    t10 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t10);

LAB32:    t18 = (t0 + 4168);
    t19 = *((char **)t18);
    t18 = (t0 + 564);
    t20 = (t0 + 4116);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4116);
    xsi_process_wait(t2, 62500LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB34:;
LAB36:    t9 = (t0 + 4216U);
    *((char **)t9) = &&LAB33;
    goto LAB1;

LAB37:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng10)));
    t4 = (t0 + 4116);
    t5 = (t0 + 564);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3168);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3260);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB40:    t9 = (t0 + 4168);
    t10 = *((char **)t9);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = (t12 + 148U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB42:    if (t17 != 0)
        goto LAB43;

LAB38:    t10 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t10);

LAB39:    t18 = (t0 + 4168);
    t19 = *((char **)t18);
    t18 = (t0 + 564);
    t20 = (t0 + 4116);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(133, ng0);

LAB44:    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t22 = *((unsigned int *)t2);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB46;

LAB45:    t4 = (t0 + 4468);
    *((int *)t4) = 1;
    t5 = (t0 + 4216U);
    *((char **)t5) = &&LAB44;
    goto LAB1;

LAB41:;
LAB43:    t9 = (t0 + 4216U);
    *((char **)t9) = &&LAB40;
    goto LAB1;

LAB46:    t6 = (t0 + 4468);
    *((int *)t6) = 0;
    xsi_set_current_line(134, ng0);
    t7 = (t0 + 4116);
    xsi_process_wait(t7, 62500LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_set_current_line(135, ng0);
    t8 = (t0 + 4116);
    t9 = (t0 + 820);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);

LAB50:    t11 = (t0 + 4168);
    t12 = *((char **)t11);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t15 = (t14 + 148U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB52:    if (t17 != 0)
        goto LAB53;

LAB48:    t12 = (t0 + 820);
    xsi_vlog_subprogram_popinvocation(t12);

LAB49:    t20 = (t0 + 4168);
    t21 = *((char **)t20);
    t20 = (t0 + 820);
    t27 = (t0 + 4116);
    t28 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t27, t28);
    goto LAB1;

LAB51:;
LAB53:    t11 = (t0 + 4216U);
    *((char **)t11) = &&LAB50;
    goto LAB1;

}


extern void work_m_00000000001803224367_3622719947_init()
{
	static char *pe[] = {(void *)Always_89_0,(void *)Cont_96_1,(void *)Always_98_2,(void *)Initial_102_3};
	static char *se[] = {(void *)sp_write,(void *)sp_read};
	xsi_register_didat("work_m_00000000001803224367_3622719947", "isim/tb_top_isim_beh.exe.sim/work/m_00000000001803224367_3622719947.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
