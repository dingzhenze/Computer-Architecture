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
static const char *ng0 = "D:/Code/ISE/2018_topic7_student/cp0.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {9, 0};



static void Always_33_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 19960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 22016);
    *((int *)t2) = 1;
    t3 = (t0 + 19992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 17040U);
    t5 = *((char **)t4);
    t4 = (t0 + 18560);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Cont_37_1(char *t0)
{
    char t3[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t1 = (t0 + 20208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 18560);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 17040U);
    t24 = *((char **)t23);
    t26 = *((unsigned int *)t3);
    t27 = *((unsigned int *)t24);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t23 = (t3 + 4);
    t29 = (t24 + 4);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB10;

LAB11:
LAB12:    t56 = (t0 + 22208);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t60, 0, 8);
    t61 = 1U;
    t62 = t61;
    t63 = (t25 + 4);
    t64 = *((unsigned int *)t25);
    t61 = (t61 & t64);
    t65 = *((unsigned int *)t63);
    t62 = (t62 & t65);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 | t61);
    t68 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t68 | t62);
    xsi_driver_vfirst_trans(t56, 0, 0);
    t69 = (t0 + 22032);
    *((int *)t69) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB10:    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t25) = (t36 | t37);
    t38 = (t3 + 4);
    t39 = (t24 + 4);
    t40 = *((unsigned int *)t3);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t24);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t54 & t50);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    goto LAB12;

}

static void Cont_41_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 20456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 15760U);
    t3 = *((char **)t2);
    t2 = (t0 + 14888);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    t20 = (t0 + 22272);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t5 + 4);
    t28 = *((unsigned int *)t5);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 22048);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void Always_43_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 20704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 22064);
    *((int *)t2) = 1;
    t3 = (t0 + 20736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 16560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 17520U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 17840U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 18720);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 18720);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 18720);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB14;

}

static void Always_51_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 20952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 22080);
    *((int *)t2) = 1;
    t3 = (t0 + 20984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 16560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 17840U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 17680U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 18880);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(55, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 18880);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 18880);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB14;

}

static void Cont_59_5(char *t0)
{
    char t6[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
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
    char *t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;

LAB0:    t1 = (t0 + 21200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 16880U);
    t3 = *((char **)t2);
    t2 = (t0 + 18720);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t10 = (t3 + 4);
    t11 = (t5 + 4);
    t12 = (t6 + 4);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = (t0 + 18880);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t42 = *((unsigned int *)t6);
    t43 = *((unsigned int *)t40);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t6 + 4);
    t46 = (t40 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB7;

LAB8:
LAB9:    t73 = (t0 + 22336);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t77, 0, 8);
    t78 = 1U;
    t79 = t78;
    t80 = (t41 + 4);
    t81 = *((unsigned int *)t41);
    t78 = (t78 & t81);
    t82 = *((unsigned int *)t80);
    t79 = (t79 & t82);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t84 | t78);
    t85 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t85 | t79);
    xsi_driver_vfirst_trans(t73, 0, 0);
    t86 = (t0 + 22096);
    *((int *)t86) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = (t3 + 4);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
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
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    goto LAB6;

LAB7:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t6 + 4);
    t56 = (t40 + 4);
    t57 = *((unsigned int *)t6);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t40);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB9;

}

static void Cont_65_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 21448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 19040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 19040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 19040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 15920U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 22400);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 22112);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_71_7(char *t0)
{
    char t13[8];
    char t29[8];
    char t38[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t39;
    int t40;
    unsigned int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 21696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 22128);
    *((int *)t2) = 1;
    t3 = (t0 + 21728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 16720U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(80, ng0);

LAB10:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 17360U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 15760U);
    t3 = *((char **)t2);
    t2 = (t0 + 14888);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB18:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 15760U);
    t3 = *((char **)t2);
    t2 = (t0 + 14752);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB26;

LAB23:    if (t18 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t13) = 1;

LAB26:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 17680U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB33;

LAB34:
LAB35:
LAB29:
LAB21:
LAB8:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 17680U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 16560U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 19040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19040);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t26 = (t0 + 19040);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t28, 2, 1, t30, 32, 1);
    t31 = ((char*)((ng2)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t13, 32, t31, 32);
    t32 = (t0 + 19040);
    t33 = (t0 + 19040);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 19040);
    t37 = (t36 + 64U);
    t49 = *((char **)t37);
    t50 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t38, t48, t35, t49, 2, 1, t50, 32, 1);
    t51 = (t38 + 4);
    t6 = *((unsigned int *)t51);
    t40 = (!(t6));
    t52 = (t48 + 4);
    t7 = *((unsigned int *)t52);
    t42 = (!(t7));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB47;

LAB48:
LAB44:    goto LAB2;

LAB6:    xsi_set_current_line(77, ng0);

LAB9:    xsi_set_current_line(78, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 18400);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB11:    xsi_set_current_line(81, ng0);

LAB14:    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 18240);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB13;

LAB17:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(85, ng0);

LAB22:    xsi_set_current_line(86, ng0);
    t26 = (t0 + 19040);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t0 + 19040);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 19040);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t29, 32, t28, t32, t35, 2, 1, t36, 32, 1);
    t37 = (t0 + 18400);
    xsi_vlogvar_assign_value(t37, t29, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 18240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB25:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(88, ng0);

LAB30:    xsi_set_current_line(89, ng0);
    t26 = (t0 + 16400U);
    t27 = *((char **)t26);
    t26 = (t0 + 19040);
    t28 = (t0 + 19040);
    t30 = (t28 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 19040);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 16240U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_array_indices(t29, t38, t31, t34, 2, 1, t36, 5, 2);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t35);
    t40 = (!(t39));
    t37 = (t38 + 4);
    t41 = *((unsigned int *)t37);
    t42 = (!(t41));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB31;

LAB32:    goto LAB29;

LAB31:    t44 = *((unsigned int *)t29);
    t45 = *((unsigned int *)t38);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t26, t27, 0, *((unsigned int *)t38), t47);
    goto LAB32;

LAB33:    xsi_set_current_line(90, ng0);

LAB36:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 19040);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 19040);
    t26 = (t12 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 19040);
    t30 = (t28 + 64U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t11, t27, t31, 2, 1, t32, 32, 1);
    t33 = (t0 + 18400);
    xsi_vlogvar_assign_value(t33, t13, 0, 0, 32);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 18240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB37:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 17200U);
    t5 = *((char **)t4);
    t4 = (t0 + 19040);
    t11 = (t0 + 19040);
    t12 = (t11 + 72U);
    t26 = *((char **)t12);
    t27 = (t0 + 19040);
    t28 = (t27 + 64U);
    t30 = *((char **)t28);
    t31 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t13, t29, t26, t30, 2, 1, t31, 32, 1);
    t32 = (t13 + 4);
    t14 = *((unsigned int *)t32);
    t40 = (!(t14));
    t33 = (t29 + 4);
    t15 = *((unsigned int *)t33);
    t42 = (!(t15));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB40;

LAB41:    goto LAB39;

LAB40:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t29);
    t46 = (t16 - t17);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t29), t47);
    goto LAB41;

LAB42:    xsi_set_current_line(103, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 19040);
    t11 = (t0 + 19040);
    t12 = (t11 + 72U);
    t26 = *((char **)t12);
    t27 = (t0 + 19040);
    t28 = (t27 + 64U);
    t30 = *((char **)t28);
    t31 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t13, t29, t26, t30, 2, 1, t31, 32, 1);
    t32 = (t13 + 4);
    t14 = *((unsigned int *)t32);
    t40 = (!(t14));
    t33 = (t29 + 4);
    t15 = *((unsigned int *)t33);
    t42 = (!(t15));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB45;

LAB46:    goto LAB44;

LAB45:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t29);
    t46 = (t16 - t17);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t29), t47);
    goto LAB46;

LAB47:    t8 = *((unsigned int *)t38);
    t9 = *((unsigned int *)t48);
    t46 = (t8 - t9);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t32, t29, 0, *((unsigned int *)t48), t47);
    goto LAB48;

}


extern void work_m_00000000002677313700_1093763706_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Cont_37_1,(void *)Cont_41_2,(void *)Always_43_3,(void *)Always_51_4,(void *)Cont_59_5,(void *)Cont_65_6,(void *)Always_71_7};
	xsi_register_didat("work_m_00000000002677313700_1093763706", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000002677313700_1093763706.didat");
	xsi_register_executes(pe);
}
