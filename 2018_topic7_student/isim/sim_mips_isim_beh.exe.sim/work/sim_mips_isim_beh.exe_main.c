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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002406252233_3092946469_init();
    work_m_00000000002799876866_1621107508_init();
    work_m_00000000002152949550_2725559894_init();
    work_m_00000000002071147326_3027548060_init();
    work_m_00000000002677313700_1093763706_init();
    work_m_00000000001531273474_1602209333_init();
    work_m_00000000002887728335_1397843898_init();
    work_m_00000000002425962643_0362415942_init();
    work_m_00000000000768551492_3877310806_init();
    work_m_00000000002138168198_2302953071_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002138168198_2302953071");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
