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
    work_m_00000000003678959683_2829513722_init();
    work_m_00000000004168081628_1372705927_init();
    work_m_00000000004136780623_2468198714_init();
    work_m_00000000000026045700_3728619972_init();
    work_m_00000000000296831413_3622719947_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000296831413_3622719947");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
