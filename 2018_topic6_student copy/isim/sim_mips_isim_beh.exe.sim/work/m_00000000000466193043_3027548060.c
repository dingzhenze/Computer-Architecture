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
static const char *ng0 = "//Mac/Home/code/Computer-Architecture/2018_topic6_student copy/datapath.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};
static unsigned int ng10[] = {0U, 0U};
static int ng11[] = {9, 0};
static int ng12[] = {10, 0};
static int ng13[] = {11, 0};
static int ng14[] = {12, 0};
static int ng15[] = {13, 0};
static int ng16[] = {14, 0};
static int ng17[] = {15, 0};
static int ng18[] = {16, 0};
static int ng19[] = {17, 0};
static int ng20[] = {18, 0};
static int ng21[] = {19, 0};
static int ng22[] = {20, 0};
static int ng23[] = {21, 0};
static int ng24[] = {22, 0};
static int ng25[] = {23, 0};
static unsigned int ng26[] = {4294967295U, 0U};



static void Cont_141_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 34544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 42056);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Always_143_1(char *t0)
{
    char t4[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 34792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 41560);
    *((int *)t2) = 1;
    t3 = (t0 + 34824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(143, ng0);

LAB5:    xsi_set_current_line(144, ng0);
    t5 = (t0 + 15624U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 31U);

LAB6:    t14 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng22)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng24)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng25)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB53;

LAB54:
LAB56:
LAB55:    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB57:    goto LAB2;

LAB7:    xsi_set_current_line(145, ng0);
    t16 = (t0 + 25464);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 32, 0LL);
    goto LAB57;

LAB9:    xsi_set_current_line(146, ng0);
    t3 = (t0 + 18024U);
    t5 = *((char **)t3);
    t3 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB11:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 29464);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB13:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 24024);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB15:    xsi_set_current_line(149, ng0);
    t3 = (t0 + 29944);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB17:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 30264);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB19:    xsi_set_current_line(151, ng0);
    t3 = (t0 + 31544);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB21:    xsi_set_current_line(152, ng0);
    t3 = (t0 + 31864);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB23:    xsi_set_current_line(153, ng0);
    t3 = (t0 + 22344U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 2U, t3, 27, t5, 5);
    t6 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t6, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB25:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 22824U);
    t5 = *((char **)t3);
    t3 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB27:    xsi_set_current_line(155, ng0);
    t3 = (t0 + 22504U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 2U, t3, 27, t5, 5);
    t6 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t6, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB29:    xsi_set_current_line(156, ng0);
    t3 = (t0 + 22984U);
    t5 = *((char **)t3);
    t3 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB31:    xsi_set_current_line(157, ng0);
    t3 = (t0 + 23144U);
    t5 = *((char **)t3);
    t3 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB33:    xsi_set_current_line(158, ng0);
    t3 = (t0 + 30904);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB35:    xsi_set_current_line(159, ng0);
    t3 = (t0 + 31064);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB37:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 23304U);
    t5 = *((char **)t3);
    t3 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB39:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    goto LAB57;

LAB41:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    goto LAB57;

LAB43:    xsi_set_current_line(163, ng0);
    t3 = (t0 + 19304U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    t6 = (t0 + 19144U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng10)));
    t14 = (t0 + 25304);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 6U, t18, 19, t17, 1, t6, 7, t7, 1, t3, 3, t5, 1);
    t19 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB45:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 19464U);
    t5 = *((char **)t3);
    t3 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB47:    xsi_set_current_line(165, ng0);
    t3 = (t0 + 19784U);
    t5 = *((char **)t3);
    t3 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB49:    xsi_set_current_line(166, ng0);
    t3 = (t0 + 19624U);
    t5 = *((char **)t3);
    t3 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB51:    xsi_set_current_line(167, ng0);
    t3 = (t0 + 26744);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 2U, t7, 27, t6, 5);
    t14 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t14, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB53:    xsi_set_current_line(168, ng0);
    t3 = (t0 + 33304);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33624);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

}

static void Cont_173_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 35040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 15624U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t21);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t33, 8);

LAB16:    t32 = (t0 + 42120);
    t34 = (t32 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t3, 8);
    xsi_driver_vfirst_trans(t32, 0, 31);
    t38 = (t0 + 41576);
    *((int *)t38) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 33624);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    goto LAB9;

LAB10:    t32 = (t0 + 23624U);
    t33 = *((char **)t32);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t27, 32, t33, 32);
    goto LAB16;

LAB14:    memcpy(t3, t27, 8);
    goto LAB16;

}

static void Cont_178_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 35288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 25464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 42184);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 41592);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Always_181_4(char *t0)
{
    char t4[8];
    char t25[8];
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

LAB0:    t1 = (t0 + 35536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 41608);
    *((int *)t2) = 1;
    t3 = (t0 + 35568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(181, ng0);

LAB5:    xsi_set_current_line(182, ng0);
    t5 = (t0 + 17704U);
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
    t23 = (t0 + 17864U);
    t24 = *((char **)t23);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t24);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t23 = (t4 + 4);
    t29 = (t24 + 4);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB12;

LAB13:
LAB14:    t56 = (t0 + 25144);
    xsi_vlogvar_assign_value(t56, t25, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 17704U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB18:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB20;

LAB19:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t13 = (t0 + 25304);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t25) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t24 + 4);
    t40 = *((unsigned int *)t4);
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
    goto LAB14;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB20:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t19 | t20);
    goto LAB19;

}

static void Always_187_5(char *t0)
{
    char t19[8];
    char t20[8];
    char t23[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 35784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 41624);
    *((int *)t2) = 1;
    t3 = (t0 + 35816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(187, ng0);

LAB5:    xsi_set_current_line(188, ng0);
    t4 = (t0 + 17704U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 17864U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(188, ng0);

LAB9:    xsi_set_current_line(189, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 25464);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(191, ng0);

LAB13:    xsi_set_current_line(192, ng0);
    t4 = (t0 + 21064U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(194, ng0);

LAB18:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 15944U);
    t3 = *((char **)t2);

LAB19:    t2 = (t0 + 472);
    t4 = *((char **)t2);
    t18 = xsi_vlog_unsigned_case_compare(t3, 3, t4, 32);
    if (t18 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 608);
    t4 = *((char **)t2);
    t18 = xsi_vlog_unsigned_case_compare(t3, 3, t4, 32);
    if (t18 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t18 = xsi_vlog_unsigned_case_compare(t3, 3, t4, 32);
    if (t18 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t18 = xsi_vlog_unsigned_case_compare(t3, 3, t4, 32);
    if (t18 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1016);
    t4 = *((char **)t2);
    t18 = xsi_vlog_unsigned_case_compare(t3, 3, t4, 32);
    if (t18 == 1)
        goto LAB28;

LAB29:
LAB30:
LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(192, ng0);

LAB17:    xsi_set_current_line(193, ng0);
    t11 = (t0 + 21224U);
    t12 = *((char **)t11);
    t11 = (t0 + 25464);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB16;

LAB20:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 22184U);
    t5 = *((char **)t2);
    t2 = (t0 + 25464);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 32, 0LL);
    goto LAB30;

LAB22:    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng10)));
    t5 = (t0 + 24024);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t22 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t20) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 0);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t10 & 67108863U);
    t13 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t13 & 67108863U);
    t24 = (t0 + 25464);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t23, 0, 8);
    t27 = (t23 + 4);
    t28 = (t26 + 4);
    t14 = *((unsigned int *)t26);
    t15 = (t14 >> 28);
    *((unsigned int *)t23) = t15;
    t16 = *((unsigned int *)t28);
    t17 = (t16 >> 28);
    *((unsigned int *)t27) = t17;
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t29 & 15U);
    t30 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t30 & 15U);
    xsi_vlogtype_concat(t19, 32, 32, 3U, t23, 4, t20, 26, t2, 2);
    t31 = (t0 + 25464);
    xsi_vlogvar_wait_assign_value(t31, t19, 0, 0, 32, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 22824U);
    t5 = *((char **)t2);
    t2 = (t0 + 25464);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 32, 0LL);
    goto LAB30;

LAB26:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 20744U);
    t5 = *((char **)t2);
    memset(t20, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t2) != 0)
        goto LAB33;

LAB34:    t12 = (t20 + 4);
    t13 = *((unsigned int *)t20);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB35;

LAB36:    t16 = *((unsigned int *)t20);
    t17 = (~(t16));
    t29 = *((unsigned int *)t12);
    t30 = (t17 || t29);
    if (t30 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t12) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t20) > 0)
        goto LAB41;

LAB42:    memcpy(t19, t26, 8);

LAB43:    t25 = (t0 + 25464);
    xsi_vlogvar_wait_assign_value(t25, t19, 0, 0, 32, 0LL);
    goto LAB30;

LAB28:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 20744U);
    t5 = *((char **)t2);
    memset(t20, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t2) != 0)
        goto LAB46;

LAB47:    t12 = (t20 + 4);
    t13 = *((unsigned int *)t20);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB48;

LAB49:    t16 = *((unsigned int *)t20);
    t17 = (~(t16));
    t29 = *((unsigned int *)t12);
    t30 = (t17 || t29);
    if (t30 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t12) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t20) > 0)
        goto LAB54;

LAB55:    memcpy(t19, t25, 8);

LAB56:    t26 = (t0 + 25464);
    xsi_vlogvar_wait_assign_value(t26, t19, 0, 0, 32, 0LL);
    goto LAB30;

LAB31:    *((unsigned int *)t20) = 1;
    goto LAB34;

LAB33:    t11 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB34;

LAB35:    t21 = (t0 + 27704);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    goto LAB36;

LAB37:    t25 = (t0 + 22184U);
    t26 = *((char **)t25);
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t19, 32, t24, 32, t26, 32);
    goto LAB43;

LAB41:    memcpy(t19, t24, 8);
    goto LAB43;

LAB44:    *((unsigned int *)t20) = 1;
    goto LAB47;

LAB46:    t11 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB47;

LAB48:    t21 = (t0 + 22184U);
    t22 = *((char **)t21);
    goto LAB49;

LAB50:    t21 = (t0 + 27704);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t19, 32, t22, 32, t25, 32);
    goto LAB56;

LAB54:    memcpy(t19, t22, 8);
    goto LAB56;

}

static void Cont_205_6(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 36032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 15944U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 7U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 42248);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t3, 8);
    xsi_driver_vfirst_trans(t26, 0, 31);
    t31 = (t0 + 41640);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 29464);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = (t0 + 25464);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Always_209_7(char *t0)
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

LAB0:    t1 = (t0 + 36280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 41656);
    *((int *)t2) = 1;
    t3 = (t0 + 36312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(209, ng0);

LAB5:    xsi_set_current_line(210, ng0);
    t4 = (t0 + 18184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 18344U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(210, ng0);

LAB9:    xsi_set_current_line(211, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 25624);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 29464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 24024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 29624);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(216, ng0);

LAB13:    xsi_set_current_line(217, ng0);
    t4 = (t0 + 25144);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 25624);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 25464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 29464);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 18024U);
    t3 = *((char **)t2);
    t2 = (t0 + 24024);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 22184U);
    t3 = *((char **)t2);
    t2 = (t0 + 29624);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Cont_224_8(char *t0)
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

LAB0:    t1 = (t0 + 36528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(225, ng0);
    t2 = (t0 + 24024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 21);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = (t0 + 42312);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 31U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 4);
    t27 = (t0 + 41672);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_224_9(char *t0)
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

LAB0:    t1 = (t0 + 36776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(225, ng0);
    t2 = (t0 + 24024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = (t0 + 42376);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 31U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 4);
    t27 = (t0 + 41688);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_224_10(char *t0)
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

LAB0:    t1 = (t0 + 37024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 24024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 11);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = (t0 + 42440);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 31U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 4);
    t27 = (t0 + 41704);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_224_11(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t29[8];
    char t34[8];
    char t47[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 37272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 16104U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t12);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t47, 8);

LAB16:    t61 = (t0 + 42504);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memcpy(t65, t3, 8);
    xsi_driver_vfirst_trans(t61, 0, 31);
    t66 = (t0 + 41720);
    *((int *)t66) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 24024);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 65535U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 65535U);
    t30 = ((char*)((ng18)));
    t31 = (t0 + 24024);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 15);
    t39 = (t38 & 1);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 15);
    t42 = (t41 & 1);
    *((unsigned int *)t35) = t42;
    xsi_vlog_mul_concat(t29, 16, 1, t30, 1U, t34, 1);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t29, 16, t17, 16);
    goto LAB9;

LAB10:    t49 = (t0 + 24024);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t48, 0, 8);
    t52 = (t48 + 4);
    t53 = (t51 + 4);
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t48) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t58 & 65535U);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 & 65535U);
    t60 = ((char*)((ng10)));
    xsi_vlogtype_concat(t47, 32, 32, 2U, t60, 16, t48, 16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t47, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Cont_230_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 37520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 22664U);
    t3 = *((char **)t2);
    t2 = (t0 + 42568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 31U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 4);
    t16 = (t0 + 41736);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_231_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 37768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 22664U);
    t3 = *((char **)t2);
    t2 = (t0 + 42632);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 31U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 4);
    t16 = (t0 + 41752);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_233_14(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;

LAB0:    t1 = (t0 + 38016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 41768);
    *((int *)t2) = 1;
    t3 = (t0 + 38048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(233, ng0);

LAB5:    xsi_set_current_line(234, ng0);
    t5 = (t0 + 24024);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 11);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 11);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 31U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 31U);
    t16 = (t0 + 29784);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 5);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 17064U);
    t3 = *((char **)t2);

LAB6:    t2 = (t0 + 3600);
    t5 = *((char **)t2);
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t5, 32);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 3736);
    t5 = *((char **)t2);
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t5, 32);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 3872);
    t5 = *((char **)t2);
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t5, 32);
    if (t17 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 22664U);
    t6 = *((char **)t2);
    t2 = (t0 + 29784);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 5);
    goto LAB13;

LAB9:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 22504U);
    t6 = *((char **)t2);
    t2 = (t0 + 29784);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 5);
    goto LAB13;

LAB11:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 14072);
    t6 = *((char **)t2);
    t2 = (t0 + 29784);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 5);
    goto LAB13;

}

static void Always_258_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 38264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 41784);
    *((int *)t2) = 1;
    t3 = (t0 + 38296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(258, ng0);

LAB5:    xsi_set_current_line(259, ng0);
    t4 = (t0 + 22824U);
    t5 = *((char **)t4);
    t4 = (t0 + 26904);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(260, ng0);
    t2 = (t0 + 22984U);
    t3 = *((char **)t2);
    t2 = (t0 + 27064);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 20264U);
    t3 = *((char **)t2);

LAB6:    t2 = (t0 + 4416);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 4552);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t4, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 4688);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t4, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 4824);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t4, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(267, ng0);
    t2 = (t0 + 20424U);
    t4 = *((char **)t2);

LAB16:    t2 = (t0 + 4416);
    t5 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 4552);
    t5 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 4688);
    t5 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 4824);
    t5 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(262, ng0);
    t2 = (t0 + 23304U);
    t5 = *((char **)t2);
    t2 = (t0 + 26904);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 32344);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 26904);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB15;

LAB11:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 19784U);
    t5 = *((char **)t2);
    t2 = (t0 + 26904);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB15;

LAB13:    xsi_set_current_line(265, ng0);
    t2 = (t0 + 22824U);
    t5 = *((char **)t2);
    t2 = (t0 + 26904);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB15;

LAB17:    xsi_set_current_line(268, ng0);
    t2 = (t0 + 23304U);
    t7 = *((char **)t2);
    t2 = (t0 + 27064);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 32);
    goto LAB25;

LAB19:    xsi_set_current_line(269, ng0);
    t2 = (t0 + 32344);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 27064);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB25;

LAB21:    xsi_set_current_line(270, ng0);
    t2 = (t0 + 19784U);
    t7 = *((char **)t2);
    t2 = (t0 + 27064);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 32);
    goto LAB25;

LAB23:    xsi_set_current_line(271, ng0);
    t2 = (t0 + 22984U);
    t7 = *((char **)t2);
    t2 = (t0 + 27064);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 32);
    goto LAB25;

}

static void Cont_275_16(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 38512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(276, ng0);
    t2 = (t0 + 26904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    t24 = (t0 + 42696);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t8 + 4);
    t32 = *((unsigned int *)t8);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 0);
    t37 = (t0 + 41800);
    *((int *)t37) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

}

static void Cont_278_17(char *t0)
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

LAB0:    t1 = (t0 + 38760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(278, ng0);
    t2 = (t0 + 27064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 42760);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 41816);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_280_18(char *t0)
{
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 39008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(280, ng0);
    t2 = (t0 + 41832);
    *((int *)t2) = 1;
    t3 = (t0 + 39040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(280, ng0);

LAB5:    xsi_set_current_line(281, ng0);
    t5 = ((char*)((ng10)));
    t7 = (t0 + 23144U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 1073741823U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 1073741823U);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t6, 30, t5, 2);
    t16 = (t0 + 27544);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 32);
    xsi_set_current_line(282, ng0);
    t2 = (t0 + 29624);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 27544);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t9, 32);
    t16 = (t0 + 27704);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 32);
    goto LAB2;

}

static void Always_286_19(char *t0)
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

LAB0:    t1 = (t0 + 39256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(286, ng0);
    t2 = (t0 + 41848);
    *((int *)t2) = 1;
    t3 = (t0 + 39288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(286, ng0);

LAB5:    xsi_set_current_line(287, ng0);
    t4 = (t0 + 18504U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(310, ng0);
    t2 = (t0 + 18664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(287, ng0);

LAB9:    xsi_set_current_line(288, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 31384);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 25784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 29944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 30264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 30104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(293, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 24344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(294, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 27864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 28184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(296, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 28344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 30424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 30584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(299, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 30744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(300, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 28504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(301, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 26264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(302, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 28664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(303, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 28984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 24504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 27224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 27384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 31224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 33464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(310, ng0);

LAB13:    xsi_set_current_line(311, ng0);
    t4 = (t0 + 17544U);
    t5 = *((char **)t4);
    t4 = (t0 + 31384);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(312, ng0);
    t2 = (t0 + 25624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25784);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(313, ng0);
    t2 = (t0 + 29464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 29944);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(314, ng0);
    t2 = (t0 + 24024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 30264);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = (t0 + 29624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 30104);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(316, ng0);
    t2 = (t0 + 29784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24344);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(317, ng0);
    t2 = (t0 + 15944U);
    t3 = *((char **)t2);
    t2 = (t0 + 27864);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(318, ng0);
    t2 = (t0 + 16264U);
    t3 = *((char **)t2);
    t2 = (t0 + 28184);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(319, ng0);
    t2 = (t0 + 16424U);
    t3 = *((char **)t2);
    t2 = (t0 + 28344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(320, ng0);
    t2 = (t0 + 22824U);
    t3 = *((char **)t2);
    t2 = (t0 + 30424);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(321, ng0);
    t2 = (t0 + 22984U);
    t3 = *((char **)t2);
    t2 = (t0 + 30584);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(322, ng0);
    t2 = (t0 + 23144U);
    t3 = *((char **)t2);
    t2 = (t0 + 30744);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(323, ng0);
    t2 = (t0 + 16584U);
    t3 = *((char **)t2);
    t2 = (t0 + 28504);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(324, ng0);
    t2 = (t0 + 16744U);
    t3 = *((char **)t2);
    t2 = (t0 + 26264);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(325, ng0);
    t2 = (t0 + 16904U);
    t3 = *((char **)t2);
    t2 = (t0 + 28664);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(326, ng0);
    t2 = (t0 + 17224U);
    t3 = *((char **)t2);
    t2 = (t0 + 28984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(327, ng0);
    t2 = (t0 + 17384U);
    t3 = *((char **)t2);
    t2 = (t0 + 24504);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(328, ng0);
    t2 = (t0 + 26904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(329, ng0);
    t2 = (t0 + 27064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(330, ng0);
    t2 = (t0 + 20584U);
    t3 = *((char **)t2);
    t2 = (t0 + 31224);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(331, ng0);
    t2 = (t0 + 22024U);
    t3 = *((char **)t2);
    t2 = (t0 + 33464);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Always_335_20(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 39504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(335, ng0);
    t2 = (t0 + 41864);
    *((int *)t2) = 1;
    t3 = (t0 + 39536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(335, ng0);

LAB5:    xsi_set_current_line(336, ng0);
    t4 = (t0 + 27224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 30904);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(337, ng0);
    t2 = (t0 + 27384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 31064);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(338, ng0);
    t2 = (t0 + 28184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 1288);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(344, ng0);
    t2 = (t0 + 28344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB16:    t6 = (t0 + 1832);
    t7 = *((char **)t6);
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t7, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(339, ng0);
    t5 = (t0 + 30264);
    t7 = (t5 + 56U);
    t11 = *((char **)t7);
    memset(t10, 0, 8);
    t12 = (t10 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 6);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 6);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 31U);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 31U);
    t20 = ((char*)((ng10)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t20, 27, t10, 5);
    t21 = (t0 + 30904);
    xsi_vlogvar_assign_value(t21, t9, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(340, ng0);
    t2 = (t0 + 30104);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 30904);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB15;

LAB11:    xsi_set_current_line(341, ng0);
    t2 = (t0 + 27224);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 30904);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB15;

LAB13:    xsi_set_current_line(342, ng0);
    t2 = (t0 + 33464);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 30904);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB15;

LAB17:    xsi_set_current_line(345, ng0);
    t6 = (t0 + 30744);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 31064);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB25;

LAB19:    xsi_set_current_line(346, ng0);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 31064);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    goto LAB25;

LAB21:    xsi_set_current_line(347, ng0);
    t2 = (t0 + 27384);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t11 = (t0 + 31064);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 32);
    goto LAB25;

LAB23:    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 31064);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    goto LAB25;

}

static void Always_361_21(char *t0)
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

LAB0:    t1 = (t0 + 39752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(361, ng0);
    t2 = (t0 + 41880);
    *((int *)t2) = 1;
    t3 = (t0 + 39784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(361, ng0);

LAB5:    xsi_set_current_line(362, ng0);
    t4 = (t0 + 18824U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 18984U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(362, ng0);

LAB9:    xsi_set_current_line(363, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 25944);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(364, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 28024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(365, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 31544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(366, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 31864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(367, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 31704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(368, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 24824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(369, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 32024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(370, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 32184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(371, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 32344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(372, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 26424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(373, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 28824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(374, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 29144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(375, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 24984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(376, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 32664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(377, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 32824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(379, ng0);

LAB13:    xsi_set_current_line(380, ng0);
    t4 = (t0 + 25784);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 25944);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(381, ng0);
    t2 = (t0 + 27864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(382, ng0);
    t2 = (t0 + 29944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 31544);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(383, ng0);
    t2 = (t0 + 30264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 31864);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(384, ng0);
    t2 = (t0 + 30104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 31704);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(385, ng0);
    t2 = (t0 + 24344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24824);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(386, ng0);
    t2 = (t0 + 30424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 32024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(387, ng0);
    t2 = (t0 + 30584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 32184);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(388, ng0);
    t2 = (t0 + 23304U);
    t3 = *((char **)t2);
    t2 = (t0 + 32344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(389, ng0);
    t2 = (t0 + 26264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26424);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(390, ng0);
    t2 = (t0 + 28664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28824);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(391, ng0);
    t2 = (t0 + 28984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 29144);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(392, ng0);
    t2 = (t0 + 24504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24984);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(393, ng0);
    t2 = (t0 + 23464U);
    t3 = *((char **)t2);
    t2 = (t0 + 32664);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(394, ng0);
    t2 = (t0 + 31224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 32824);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Cont_399_22(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 40000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(400, ng0);
    t2 = (t0 + 26424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 42824);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 41896);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_399_23(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 40248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(400, ng0);
    t2 = (t0 + 28824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 42888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 41912);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_399_24(char *t0)
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

LAB0:    t1 = (t0 + 40496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(401, ng0);
    t2 = (t0 + 32344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 42952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 41928);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_399_25(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 40744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(402, ng0);
    t2 = (t0 + 32824);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t27, 8);

LAB16:    t28 = (t0 + 43016);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t3, 8);
    xsi_driver_vfirst_trans(t28, 0, 31);
    t33 = (t0 + 41944);
    *((int *)t33) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 32184);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = (t0 + 33304);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t27, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Always_406_26(char *t0)
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

LAB0:    t1 = (t0 + 40992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(406, ng0);
    t2 = (t0 + 41960);
    *((int *)t2) = 1;
    t3 = (t0 + 41024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(406, ng0);

LAB5:    xsi_set_current_line(407, ng0);
    t4 = (t0 + 19944U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(415, ng0);
    t2 = (t0 + 20104U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(407, ng0);

LAB9:    xsi_set_current_line(408, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 26104);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(409, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 26584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(410, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 29304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(411, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 26744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(412, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 32984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(413, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 33144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(415, ng0);

LAB13:    xsi_set_current_line(416, ng0);
    t4 = (t0 + 25944);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 26104);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(417, ng0);
    t2 = (t0 + 24984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26584);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(418, ng0);
    t2 = (t0 + 29144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 29304);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(419, ng0);
    t2 = (t0 + 24824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26744);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(420, ng0);
    t2 = (t0 + 32344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 32984);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(421, ng0);
    t2 = (t0 + 19784U);
    t3 = *((char **)t2);
    t2 = (t0 + 33144);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Always_425_27(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 41240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(425, ng0);
    t2 = (t0 + 41976);
    *((int *)t2) = 1;
    t3 = (t0 + 41272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(425, ng0);

LAB5:    xsi_set_current_line(426, ng0);
    t4 = (t0 + 32984);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33304);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(427, ng0);
    t2 = (t0 + 29304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 4008);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 1, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 4144);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 1, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(428, ng0);
    t5 = (t0 + 32984);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = (t0 + 33304);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(429, ng0);
    t2 = (t0 + 33144);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33304);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB11;

}


extern void work_m_00000000000466193043_3027548060_init()
{
	static char *pe[] = {(void *)Cont_141_0,(void *)Always_143_1,(void *)Cont_173_2,(void *)Cont_178_3,(void *)Always_181_4,(void *)Always_187_5,(void *)Cont_205_6,(void *)Always_209_7,(void *)Cont_224_8,(void *)Cont_224_9,(void *)Cont_224_10,(void *)Cont_224_11,(void *)Cont_230_12,(void *)Cont_231_13,(void *)Always_233_14,(void *)Always_258_15,(void *)Cont_275_16,(void *)Cont_278_17,(void *)Always_280_18,(void *)Always_286_19,(void *)Always_335_20,(void *)Always_361_21,(void *)Cont_399_22,(void *)Cont_399_23,(void *)Cont_399_24,(void *)Cont_399_25,(void *)Always_406_26,(void *)Always_425_27};
	xsi_register_didat("work_m_00000000000466193043_3027548060", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000000466193043_3027548060.didat");
	xsi_register_executes(pe);
}
