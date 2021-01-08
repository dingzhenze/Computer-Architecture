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
static const char *ng0 = "D:/Code/ISE/2018_topic7_student/alu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};



static void Always_19_0(char *t0)
{
    char t8[8];
    char t15[8];
    char t17[8];
    char t18[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;

LAB0:    t1 = (t0 + 17560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 17880);
    *((int *)t2) = 1;
    t3 = (t0 + 17592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 16480);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 15920U);
    t3 = *((char **)t2);

LAB6:    t2 = (t0 + 2240);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 2376);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 2512);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 2648);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 2784);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 2920);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 3056);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 3192);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 3328);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 3464);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(22, ng0);

LAB28:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 15600U);
    t5 = *((char **)t2);
    t2 = (t0 + 15760U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 16480);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB27;

LAB9:    xsi_set_current_line(25, ng0);

LAB29:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 15600U);
    t5 = *((char **)t2);
    t2 = (t0 + 15760U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 16480);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB27;

LAB11:    xsi_set_current_line(28, ng0);

LAB30:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 16080U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 15600U);
    t4 = *((char **)t2);
    t2 = (t0 + 15760U);
    t5 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t4 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB35;

LAB34:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB36;

LAB37:    t16 = (t0 + 16480);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 32);

LAB33:    goto LAB27;

LAB13:    xsi_set_current_line(32, ng0);

LAB39:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 15760U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t18, 48, 48, 2U, t7, 32, t2, 16);
    t5 = (t0 + 16480);
    xsi_vlogvar_assign_value(t5, t18, 0, 0, 32);
    goto LAB27;

LAB15:    xsi_set_current_line(35, ng0);

LAB40:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 15600U);
    t5 = *((char **)t2);
    t2 = (t0 + 15760U);
    t7 = *((char **)t2);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t2 = (t5 + 4);
    t14 = (t7 + 4);
    t16 = (t8 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t14);
    t19 = (t12 | t13);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB41;

LAB42:
LAB43:    t42 = (t0 + 16480);
    xsi_vlogvar_assign_value(t42, t8, 0, 0, 32);
    goto LAB27;

LAB17:    xsi_set_current_line(38, ng0);

LAB44:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 15600U);
    t5 = *((char **)t2);
    t2 = (t0 + 15760U);
    t7 = *((char **)t2);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t8) = t11;
    t2 = (t5 + 4);
    t14 = (t7 + 4);
    t16 = (t8 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t14);
    t19 = (t12 | t13);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB45;

LAB46:
LAB47:    t42 = (t0 + 16480);
    xsi_vlogvar_assign_value(t42, t8, 0, 0, 32);
    goto LAB27;

LAB19:    xsi_set_current_line(41, ng0);

LAB48:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 15600U);
    t5 = *((char **)t2);
    t2 = (t0 + 15760U);
    t7 = *((char **)t2);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t8) = t11;
    t2 = (t5 + 4);
    t14 = (t7 + 4);
    t16 = (t8 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t14);
    t19 = (t12 | t13);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB49;

LAB50:
LAB51:    t24 = (t0 + 16480);
    xsi_vlogvar_assign_value(t24, t8, 0, 0, 32);
    goto LAB27;

LAB21:    xsi_set_current_line(44, ng0);

LAB52:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 15600U);
    t5 = *((char **)t2);
    t2 = (t0 + 15760U);
    t7 = *((char **)t2);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t15) = t11;
    t2 = (t5 + 4);
    t14 = (t7 + 4);
    t16 = (t15 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t14);
    t19 = (t12 | t13);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB53;

LAB54:
LAB55:    memset(t8, 0, 8);
    t42 = (t8 + 4);
    t43 = (t15 + 4);
    t38 = *((unsigned int *)t15);
    t39 = (~(t38));
    *((unsigned int *)t8) = t39;
    *((unsigned int *)t42) = 0;
    if (*((unsigned int *)t43) != 0)
        goto LAB57;

LAB56:    t46 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t46 & 4294967295U);
    t47 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t47 & 4294967295U);
    t48 = (t0 + 16480);
    xsi_vlogvar_assign_value(t48, t8, 0, 0, 32);
    goto LAB27;

LAB23:    xsi_set_current_line(47, ng0);

LAB58:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 15760U);
    t5 = *((char **)t2);
    t2 = (t0 + 15600U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 16480);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB27;

LAB25:    xsi_set_current_line(50, ng0);

LAB59:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 16080U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 15760U);
    t4 = *((char **)t2);
    t2 = (t0 + 15600U);
    t5 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_rshift(t8, 32, t4, 32, t5, 32);
    t2 = (t0 + 16480);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);

LAB62:    goto LAB27;

LAB31:    xsi_set_current_line(29, ng0);
    t7 = (t0 + 15600U);
    t14 = *((char **)t7);
    t7 = (t0 + 15760U);
    t16 = *((char **)t7);
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t14, 32, t16, 32);
    t7 = (t0 + 16480);
    xsi_vlogvar_assign_value(t7, t17, 0, 0, 32);
    goto LAB33;

LAB35:    t14 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t17) = 1;
    goto LAB37;

LAB41:    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t8) = (t22 | t23);
    t24 = (t5 + 4);
    t25 = (t7 + 4);
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (~(t32));
    t34 = (t27 & t29);
    t35 = (t31 & t33);
    t36 = (~(t34));
    t37 = (~(t35));
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & t36);
    t39 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t39 & t37);
    t40 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t40 & t36);
    t41 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t41 & t37);
    goto LAB43;

LAB45:    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t8) = (t22 | t23);
    t24 = (t5 + 4);
    t25 = (t7 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t5);
    t34 = (t28 & t27);
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t35 = (t31 & t30);
    t32 = (~(t34));
    t33 = (~(t35));
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t36 & t32);
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & t33);
    goto LAB47;

LAB49:    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t8) = (t22 | t23);
    goto LAB51;

LAB53:    t22 = *((unsigned int *)t15);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t22 | t23);
    t24 = (t5 + 4);
    t25 = (t7 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t5);
    t34 = (t28 & t27);
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t35 = (t31 & t30);
    t32 = (~(t34));
    t33 = (~(t35));
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t36 & t32);
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & t33);
    goto LAB55;

LAB57:    t40 = *((unsigned int *)t8);
    t41 = *((unsigned int *)t43);
    *((unsigned int *)t8) = (t40 | t41);
    t44 = *((unsigned int *)t42);
    t45 = *((unsigned int *)t43);
    *((unsigned int *)t42) = (t44 | t45);
    goto LAB56;

LAB60:    xsi_set_current_line(51, ng0);
    t7 = (t0 + 15760U);
    t14 = *((char **)t7);
    t7 = (t0 + 15600U);
    t16 = *((char **)t7);
    memset(t15, 0, 8);
    xsi_vlog_signed_arith_rshift(t15, 32, t14, 32, t16, 32);
    t7 = (t0 + 16480);
    xsi_vlogvar_assign_value(t7, t15, 0, 0, 32);
    goto LAB62;

}


extern void work_m_00000000002152949550_2725559894_init()
{
	static char *pe[] = {(void *)Always_19_0};
	xsi_register_didat("work_m_00000000002152949550_2725559894", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000002152949550_2725559894.didat");
	xsi_register_executes(pe);
}
