// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2021 MediaTek Inc.
 */


/* This file is generated by GenLP_setting.pl v1.5.7 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

const unsigned int AP_DCM_Golden_Setting_tcl_gs_dpidle_data[] = {
	/*  Address     Mask        Golden Setting Value */
	0xC533230, 0x3, 0x0,/* STALL_DCM_CONF */
	0xC533A30, 0x3, 0x0,/* STALL_DCM_CONF */
	0xC53A2A0, 0x3000600, 0x3000000,/* CPU_PLLDIV_CFG0 */
	0xC53A2A4, 0x3000600, 0x3000000,/* CPU_PLLDIV_CFG1 */
	0xC53A2A8, 0x3000600, 0x3000000,/* CPU_PLLDIV_CFG2 */
	0xC53A2AC, 0x3000600, 0x3000000,/* CPU_PLLDIV_CFG3 */
	0xC53A2B0, 0x3000600, 0x3000000,/* CPU_PLLDIV_CFG4 */
	0xC53A2E0, 0x83000E00, 0x83000800,/* BUS_PLLDIV_CFG */
	0xC53A440, 0xFFFF, 0xFFFF,/* MCSIC_DCM0 */
	0xC53A500, 0x20000, 0x20000,/* MP_ADB_DCM_CFG0 */
	0xC53A510, 0x278000, 0x278000,/* MP_ADB_DCM_CFG4 */
	0xC53A518, 0x3A, 0x3A,/* MP_MISC_DCM_CFG0 */
	0xC53A5C0, 0x78100, 0x78100,/* MCUSYS_DCM_CFG0 */
	0xC53A900, 0xF, 0xF,/* EMI_WFIFO */
	0xC53C880, 0x1000F, 0x1000F,/* MP0_DCM_CFG0 */
	0xC53C89C, 0x11, 0x11,/* MP0_DCM_CFG7 */
	0x10001070, 0xC0D07FFB, 0xC0D00603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xA03FFFFB, 0xA03F83E3,/* PERI_BUS_DCM_CTRL */
	0x100010A0, 0xF, 0x0,/* P2P_RX_CLK_ON */
	0x10001A30, 0x7F000, 0x30000,/* INFRA_AXIMEM_IDLE_BIT_EN_0 */
	0x1000A000, 0x80000000, 0x80000000,/* SEJ_CON */
	0x1001A208, 0xFFFF, 0xFFFF,/* DXCC_NEW_HWDCM_CFG */
	0x10022014, 0x5F00B3, 0x4000B3,/* VDNR_DCM_TOP_INFRA_PAR_BUS_u_INFRA_PAR_BUS_CTRL_0 */
	0x10022018, 0x107C5F, 0x100040,/* VDNR_DCM_TOP_INFRA_PAR_BUS_u_INFRA_PAR_BUS_CTRL_1 */
	0x1002201C, 0x1F, 0x0,/* VDNR_DCM_TOP_INFRA_PAR_BUS_u_INFRA_PAR_BUS_CTRL_2 */
	0x10219060, 0xFF000000, 0x0,/* EMI_CONM */
	0x10219068, 0xFF000000, 0x0,/* EMI_CONN */
	0x10219830, 0x2000, 0x0,/* EMI_THRO_CTRL0 */
	0x1021C600, 0x10, 0x10,/* APU_ACP_GALS_SLV_CTRL */
	0x1021C604, 0x10, 0x10,/* APU_SLB1_GALS_SLV_CTRL */
	0x1021C608, 0x10, 0x10,/* APU_SLB0_GALS_SLV_CTRL */
	0x1021C61C, 0xF, 0x5,/* MDMCU_EMI_GALS_SLV_CTRL */
	0x1021C620, 0xF, 0x5,/* MDHW_EMI_GALS_SLV_CTRL */
	0x1021C624, 0x10, 0x10,/* APU_EMI1_GALS_SLV_CTRL */
	0x1021C628, 0x10, 0x10,/* APU_EMI0_GALS_SLV_CTRL */
	0x1021C62C, 0x10, 0x10,/* MFG_EMI1_GALS_SLV_CTRL */
	0x1021C630, 0x10, 0x10,/* MFG_EMI0_GALS_SLV_CTRL */
	0x10235008, 0xFF000000, 0x0,/* CHN_EMI_CONB */
	0x102384EC, 0xBFF00, 0x0,/* MISC_CG_CTRL0 */
	0x102384F4, 0x7E000C0, 0x600000,/* MISC_CG_CTRL2 */
	0x10238524, 0x1000000, 0x0,/* MISC_DQSG_RETRY1 */
	0x10238560, 0x40000000, 0x0,/* MISC_APB */
	0x10238644, 0xF, 0x0,/* MISC_CTRL2 */
	0x102484EC, 0xBFF00, 0x0,/* MISC_CG_CTRL0 */
	0x102484F4, 0x7E000C0, 0x600000,/* MISC_CG_CTRL2 */
	0x10248524, 0x1000000, 0x0,/* MISC_DQSG_RETRY1 */
	0x10248560, 0x40000000, 0x0,/* MISC_APB */
	0x10248644, 0xF, 0x0,/* MISC_CTRL2 */
	0x1025E300, 0xFE, 0x0,/* SMI_DCM */
	0x1025F300, 0xFE, 0x0,/* SMI_DCM */
	0x10270100, 0xFFF00000, 0x4FD00000,/* DCM_MISC_CTRL_W1S */
	0x10270200, 0xFFFFFFFF, 0x1F0F607B,/* MEM_IDLE_BIT_EN_1 */
	0x10270204, 0xFFFFFFFF, 0xFE9F807F,/* MEM_IDLE_BIT_EN_0 */
	0x10270208, 0xFFFFFFFF, 0x0,/* M0M1_IDLE_BIT_EN_1 */
	0x1027020C, 0xFFFFFFFF, 0x20000007,/* M0M1_IDLE_BIT_EN_0 */
	0x10270210, 0xFFFFFFFF, 0x6000,/* M2M5_IDLE_BIT_EN_1 */
	0x10270214, 0xFFFFFFFF, 0x101E0000,/* M2M5_IDLE_BIT_EN_0 */
	0x10270218, 0xFFFFFFFF, 0x1,/* M3_IDLE_BIT_EN_1 */
	0x1027021C, 0xFFFFFFFF, 0x800000,/* M3_IDLE_BIT_EN_0 */
	0x10270220, 0xFFFFFFFF, 0x10000022,/* M4_IDLE_BIT_EN_1 */
	0x10270224, 0xFFFFFFFF, 0x8000000,/* M4_IDLE_BIT_EN_0 */
	0x10270228, 0xFFFFFFFF, 0x10000018,/* M6M7_IDLE_BIT_EN_1 */
	0x1027022C, 0xFFFFFFFF, 0xC4000068,/* M6M7_IDLE_BIT_EN_0 */
	0x10270230, 0xFFFFFFFF, 0x10000000,/* SRAM_IDLE_BIT_EN_1 */
	0x10270234, 0xFFFFFFFF, 0x0,/* SRAM_IDLE_BIT_EN_0 */
	0x10270238, 0xFFFFFFFF, 0xFE9F807F,/* DRAMC_IDLE_BIT_EN_0 */
	0x1027023C, 0xFFFFFFFF, 0x1F0F607B,/* DRAMC_IDLE_BIT_EN_1 */
	0x10270300, 0x40, 0x0,/* DCM_FR */
	0x10270304, 0xBF, 0x0,/* DCM_STALL_EN */
	0x10270308, 0xFF, 0xFF,/* DCM_MODE */
	0x10270500, 0xFFFF, 0xFFFF,/* SWCG_EN */
	0x10270A80, 0xFFFFFFFF, 0x0,/* DDR_BIT_EN_0 */
	0x10270A84, 0xFFFFFFFF, 0x38,/* DDR_BIT_EN_1 */
	0x1030C300, 0xFE, 0x0,/* SMI_DCM */
	0x10943008, 0x40000FFF, 0x40000FFF,/* SSPM_DCM_CTRL */
	0x11035014, 0x1000292, 0x1000292,/* VDNR_DCM_TOP_PERI_PAR_BUS_u_PERI_PAR_BUS_CTRL_0 */
	0x11035018, 0x400, 0x400,/* VDNR_DCM_TOP_PERI_PAR_BUS_u_PERI_PAR_BUS_CTRL_1 */
	0x11050000, 0x60000000, 0x60000000,/* AUDIO_TOP_CON0 */
	0x11200950, 0x1000000, 0x1000000,/* HDMA_CFG */
	0x11203E00, 0x10000, 0x10000,/* SSUSB_IP_PW_CTRL0 */
	0x11203E04, 0x1, 0x1,/* SSUSB_IP_PW_CTRL1 */
	0x11203E08, 0x1, 0x1,/* SSUSB_IP_PW_CTRL2 */
	0x11203E0C, 0x1, 0x1,/* SSUSB_IP_PW_CTRL3 */
	0x11203E30, 0xA, 0xA,/* SSUSB_U3_CTRL_0P */
	0x11203E50, 0xA, 0xA,/* SSUSB_U2_CTRL_0P */
	0x11203E88, 0x3, 0x3,/* SSUSB_CSR_CK_CTRL */
	0x11203E8C, 0x1F, 0x1F,/* SSUSB_REF_CK_CTRL */
	0x112A0014, 0x8000000, 0x0,/* MP_GLB_DIG_14 */
	0x112BA01C, 0x200052, 0x200052,/* VDNR_DCM_TOP_UFS_BUS_u_UFS_BUS_CTRL_0 */
	0x13FBF010, 0x3FF7F, 0xC03F,/* MFG_DCM_CON_0 */
	0x13FBF024, 0x1, 0x1,/* MFG_ASYNC_CON_1 */
	0x13FBF0B0, 0x700, 0x0,/* MFG_GLOBAL_CON */
	0x13FBF0B4, 0x10, 0x10,/* MFG_QCHANNEL_CON */
	0x14000120, 0xFFFFFFFF, 0x0,/* MMSYS_HW_DCM_1ST_DIS0 */
	0x14000124, 0xFFFFFFFF, 0x0,/* MMSYS_HW_DCM_1ST_DIS_SET0 */
	0x14000128, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_1ST_DIS_CLR0 */
	0x14000130, 0x1, 0x0,/* MMSYS_HW_DCM_1ST_DIS1 */
	0x14000134, 0x1, 0x0,/* MMSYS_HW_DCM_1ST_DIS_SET1 */
	0x14000138, 0x1, 0x1,/* MMSYS_HW_DCM_1ST_DIS_CLR1 */
	0x14000140, 0x3FFFFFFF, 0x0,/* MMSYS_HW_DCM_2ND_DIS0 */
	0x14000144, 0x3FFFFFFF, 0x0,/* MMSYS_HW_DCM_2ND_DIS_SET0 */
	0x14000148, 0x3FFFFFFF, 0x3FFFFFFF,/* MMSYS_HW_DCM_2ND_DIS_CLR0 */
	0x14000150, 0x1, 0x0,/* MMSYS_HW_DCM_2ND_DIS1 */
	0x14000154, 0x1, 0x0,/* MMSYS_HW_DCM_2ND_DIS_SET1 */
	0x14000158, 0x1, 0x1,/* MMSYS_HW_DCM_2ND_DIS_CLR1 */
	0x140001C0, 0xFFFFFFFF, 0x0,/* MMSYS_HW_DCM_2ND_DIS2 */
	0x1400F1F0, 0xFFFFFFFF, 0x0,/* DISP_POSTMASK_FUNC_DCM0 */
	0x1400F1F4, 0xFFFFFFFF, 0x0,/* DISP_POSTMASK_FUNC_DCM1 */
	0x14021014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x14022014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1502E014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1502F300, 0xFE, 0x0,/* SMI_DCM */
	0x1602E014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1602F018, 0x1, 0x0,/* VDEC_DCM_CON */
	0x1602F218, 0x1, 0x0,/* LAT_DCM_CON */
	0x17010014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x17030300, 0x1, 0x0,/* JPGENC_DCM_CTRL */
	0x1A001014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1A002014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1A00C300, 0xFE, 0x0,/* SMI_DCM */
	0x1A00D300, 0xFE, 0x0,/* SMI_DCM */
	0x1A00F014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1A010014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1B00E300, 0xFE, 0x0,/* SMI_DCM */
	0x1B00F014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1C014008, 0x1, 0x1,/* DCM_CTRL */
	0x1C014010, 0xFFFFFFFF, 0xFFFFFFFF,/* INF_CK_DCM_EN */
	0x1C014014, 0x7F, 0x7F,/* OTHER_CK_DCM_EN */
	0x1C0170A4, 0x3E013, 0x13,/* VDNR_DCM_TOP_VLP_PAR_BUS_u_VLP_PAR_BUS_CTRL_0 */
	0x1C343004, 0x100, 0x100,/* SSPM_MCLK_DIV */
	0x1C343008, 0x1FFFFF, 0x1FBFFF,/* SSPM_DCM_CTRL */
	0x1C7B1F88, 0x7, 0x7,/* I2C1_CHN_HW_CG_EN */
	0x1C7B5F88, 0x7, 0x7,/* I2C5_CHN_HW_CG_EN */
	0x1C7B6F88, 0x7, 0x7,/* I2C6_CHN_HW_CG_EN */
	0x1C804008, 0x1, 0x1,/* DCM_CTRL */
	0x1C804010, 0xFFFFFFFF, 0xFFFFFFFF,/* INF_CK_DCM_EN */
	0x1C804014, 0x7F, 0x7F,/* OTHER_CK_DCM_EN */
	0x1E800150, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS0 */
	0x1E800160, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS1 */
	0x1E800170, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS2 */
	0x1E800180, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS3 */
	0x1E800190, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS4 */
	0x1E801300, 0xFE, 0x0,/* SMI_DCM */
	0x1E802050, 0x7FFFFF, 0x0,/* MMU_DCM_DIS */
	0x1E807300, 0xFE, 0x0,/* SMI_DCM */
	0x1E808300, 0xFE, 0x0,/* SMI_DCM */
	0x1E809300, 0xFE, 0x0,/* SMI_DCM */
	0x1E80A300, 0xFE, 0x0,/* SMI_DCM */
	0x1E9800F0, 0xFFFF, 0xFFFF,/* GCE_CTL_INT0 */
	0x1E9900F0, 0xFFFF, 0xFFFF,/* GCE_CTL_INT0 */
	0x1F000150, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS0 */
	0x1F000154, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS_SET0 */
	0x1F000158, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_HW_DCM_1ST_DIS_CLR0 */
	0x1F000160, 0xF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS1 */
	0x1F000164, 0xF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS_SET1 */
	0x1F000168, 0xF, 0xF,/* MDPSYS_HW_DCM_1ST_DIS_CLR1 */
	0x1F000170, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS2 */
	0x1F000180, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS3 */
	0x1F000190, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS4 */
	0x1F0001A0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS0 */
	0x1F0001A4, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS_SET0 */
	0x1F0001A8, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_HW_DCM_2ND_DIS_CLR0 */
	0x1F0001B0, 0xF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS1 */
	0x1F0001B4, 0xF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS_SET1 */
	0x1F0001B8, 0xF, 0xF,/* MDPSYS_HW_DCM_2ND_DIS_CLR1 */
	0x1F0001C0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS2 */
	0x1F0001D0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS3 */
	0x1F0001E0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS4 */
	0x1F002014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_dpidle =
		AP_DCM_Golden_Setting_tcl_gs_dpidle_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_dpidle_len = 507;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_suspend_data[] = {
	/*  Address     Mask        Golden Setting Value */
	0xC533230, 0x3, 0x0,/* STALL_DCM_CONF */
	0xC533A30, 0x3, 0x0,/* STALL_DCM_CONF */
	0xC53A2A0, 0x3000600, 0x3000000,/* CPU_PLLDIV_CFG0 */
	0xC53A2A4, 0x3000600, 0x3000000,/* CPU_PLLDIV_CFG1 */
	0xC53A2A8, 0x3000600, 0x3000000,/* CPU_PLLDIV_CFG2 */
	0xC53A2AC, 0x3000600, 0x3000000,/* CPU_PLLDIV_CFG3 */
	0xC53A2B0, 0x3000600, 0x3000000,/* CPU_PLLDIV_CFG4 */
	0xC53A2E0, 0x83000E00, 0x83000800,/* BUS_PLLDIV_CFG */
	0xC53A440, 0xFFFF, 0xFFFF,/* MCSIC_DCM0 */
	0xC53A500, 0x20000, 0x20000,/* MP_ADB_DCM_CFG0 */
	0xC53A510, 0x278000, 0x278000,/* MP_ADB_DCM_CFG4 */
	0xC53A518, 0x3A, 0x3A,/* MP_MISC_DCM_CFG0 */
	0xC53A5C0, 0x78100, 0x78100,/* MCUSYS_DCM_CFG0 */
	0xC53A900, 0xF, 0xF,/* EMI_WFIFO */
	0xC53C880, 0x1000F, 0x1000F,/* MP0_DCM_CFG0 */
	0xC53C89C, 0x11, 0x11,/* MP0_DCM_CFG7 */
	0x10001070, 0xC0D07FFB, 0xC0D00603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xA03FFFFB, 0xA03F83E3,/* PERI_BUS_DCM_CTRL */
	0x100010A0, 0xF, 0x0,/* P2P_RX_CLK_ON */
	0x10001A30, 0x7F000, 0x30000,/* INFRA_AXIMEM_IDLE_BIT_EN_0 */
	0x1000A000, 0x80000000, 0x80000000,/* SEJ_CON */
	0x1001A208, 0xFFFF, 0xFFFF,/* DXCC_NEW_HWDCM_CFG */
	0x10022014, 0x5F00B3, 0x4000B3,/* VDNR_DCM_TOP_INFRA_PAR_BUS_u_INFRA_PAR_BUS_CTRL_0 */
	0x10022018, 0x107C5F, 0x100040,/* VDNR_DCM_TOP_INFRA_PAR_BUS_u_INFRA_PAR_BUS_CTRL_1 */
	0x1002201C, 0x1F, 0x0,/* VDNR_DCM_TOP_INFRA_PAR_BUS_u_INFRA_PAR_BUS_CTRL_2 */
	0x10219060, 0xFF000000, 0x0,/* EMI_CONM */
	0x10219068, 0xFF000000, 0x0,/* EMI_CONN */
	0x10219830, 0x2000, 0x0,/* EMI_THRO_CTRL0 */
	0x1021C600, 0x10, 0x10,/* APU_ACP_GALS_SLV_CTRL */
	0x1021C604, 0x10, 0x10,/* APU_SLB1_GALS_SLV_CTRL */
	0x1021C608, 0x10, 0x10,/* APU_SLB0_GALS_SLV_CTRL */
	0x1021C61C, 0xF, 0x5,/* MDMCU_EMI_GALS_SLV_CTRL */
	0x1021C620, 0xF, 0x5,/* MDHW_EMI_GALS_SLV_CTRL */
	0x1021C624, 0x10, 0x10,/* APU_EMI1_GALS_SLV_CTRL */
	0x1021C628, 0x10, 0x10,/* APU_EMI0_GALS_SLV_CTRL */
	0x1021C62C, 0x10, 0x10,/* MFG_EMI1_GALS_SLV_CTRL */
	0x1021C630, 0x10, 0x10,/* MFG_EMI0_GALS_SLV_CTRL */
	0x10230000, 0x1, 0x0,/* DDRCOMMON0 */
	0x10230100, 0x80000, 0x0,/* TEST2_A0 */
	0x10230108, 0x100, 0x0,/* TEST2_A3 */
	0x10230110, 0x1000000, 0x1000000,/* DUMMY_RD */
	0x10230168, 0x1000, 0x0,/* SREF_DPD_CTRL */
	0x10230190, 0x7, 0x0,/* ACTIMING_CTRL */
	0x102301A0, 0x180000, 0x0,/* ZQ_SET0 */
	0x102301B0, 0x620000, 0x0,/* TX_TRACKING_SET0 */
	0x102301FC, 0xC000106F, 0xC0000007,/* DRAMC_PD_CTRL */
	0x10230200, 0x4, 0x0,/* DCM_CTRL0 */
	0x10230208, 0x80000, 0x80000,/* DVFS_CTRL0 */
	0x1023021C, 0x10, 0x0,/* CMD_DEC_CTRL0 */
	0x1023023C, 0x7, 0x0,/* TX_CG_SET0 */
	0x10230244, 0xC0000000, 0x0,/* RX_CG_SET0 */
	0x10230250, 0x2, 0x0,/* MISCTL0 */
	0x10230260, 0x8007FFF, 0x0,/* CLKAR */
	0x10230288, 0xC0000000, 0x0,/* SCSMCTRL_CG */
	0x102316AC, 0x80000000, 0x80000000,/* SHU_APHY_TX_PICG_CTRL */
	0x10235008, 0xFF000000, 0x0,/* CHN_EMI_CONB */
	0x102384EC, 0xBFF00, 0x0,/* MISC_CG_CTRL0 */
	0x102384F4, 0x7E000C0, 0x600000,/* MISC_CG_CTRL2 */
	0x10238524, 0x1000000, 0x0,/* MISC_DQSG_RETRY1 */
	0x10238560, 0x40000000, 0x0,/* MISC_APB */
	0x10238644, 0xF, 0x0,/* MISC_CTRL2 */
	0x10240000, 0x1, 0x0,/* DDRCOMMON0 */
	0x10240100, 0x80000, 0x0,/* TEST2_A0 */
	0x10240108, 0x100, 0x0,/* TEST2_A3 */
	0x10240110, 0x1000000, 0x1000000,/* DUMMY_RD */
	0x10240168, 0x1000, 0x0,/* SREF_DPD_CTRL */
	0x10240190, 0x7, 0x0,/* ACTIMING_CTRL */
	0x102401A0, 0x180000, 0x0,/* ZQ_SET0 */
	0x102401B0, 0x620000, 0x0,/* TX_TRACKING_SET0 */
	0x102401FC, 0xC000106F, 0xC0000007,/* DRAMC_PD_CTRL */
	0x10240200, 0x4, 0x0,/* DCM_CTRL0 */
	0x10240208, 0x80000, 0x80000,/* DVFS_CTRL0 */
	0x1024021C, 0x10, 0x0,/* CMD_DEC_CTRL0 */
	0x1024023C, 0x7, 0x0,/* TX_CG_SET0 */
	0x10240244, 0xC0000000, 0x0,/* RX_CG_SET0 */
	0x10240250, 0x2, 0x0,/* MISCTL0 */
	0x10240260, 0x8007FFF, 0x0,/* CLKAR */
	0x10240288, 0xC0000000, 0x0,/* SCSMCTRL_CG */
	0x102416AC, 0x80000000, 0x80000000,/* SHU_APHY_TX_PICG_CTRL */
	0x102484EC, 0xBFF00, 0x0,/* MISC_CG_CTRL0 */
	0x102484F4, 0x7E000C0, 0x600000,/* MISC_CG_CTRL2 */
	0x10248524, 0x1000000, 0x0,/* MISC_DQSG_RETRY1 */
	0x10248560, 0x40000000, 0x0,/* MISC_APB */
	0x10248644, 0xF, 0x0,/* MISC_CTRL2 */
	0x1025E300, 0xFE, 0x0,/* SMI_DCM */
	0x1025F300, 0xFE, 0x0,/* SMI_DCM */
	0x10270100, 0xFFF00000, 0x4FD00000,/* DCM_MISC_CTRL_W1S */
	0x10270200, 0xFFFFFFFF, 0x1F0F607B,/* MEM_IDLE_BIT_EN_1 */
	0x10270204, 0xFFFFFFFF, 0xFE9F807F,/* MEM_IDLE_BIT_EN_0 */
	0x10270208, 0xFFFFFFFF, 0x0,/* M0M1_IDLE_BIT_EN_1 */
	0x1027020C, 0xFFFFFFFF, 0x20000007,/* M0M1_IDLE_BIT_EN_0 */
	0x10270210, 0xFFFFFFFF, 0x6000,/* M2M5_IDLE_BIT_EN_1 */
	0x10270214, 0xFFFFFFFF, 0x101E0000,/* M2M5_IDLE_BIT_EN_0 */
	0x10270218, 0xFFFFFFFF, 0x1,/* M3_IDLE_BIT_EN_1 */
	0x1027021C, 0xFFFFFFFF, 0x800000,/* M3_IDLE_BIT_EN_0 */
	0x10270220, 0xFFFFFFFF, 0x10000022,/* M4_IDLE_BIT_EN_1 */
	0x10270224, 0xFFFFFFFF, 0x8000000,/* M4_IDLE_BIT_EN_0 */
	0x10270228, 0xFFFFFFFF, 0x10000018,/* M6M7_IDLE_BIT_EN_1 */
	0x1027022C, 0xFFFFFFFF, 0xC4000068,/* M6M7_IDLE_BIT_EN_0 */
	0x10270230, 0xFFFFFFFF, 0x10000000,/* SRAM_IDLE_BIT_EN_1 */
	0x10270234, 0xFFFFFFFF, 0x0,/* SRAM_IDLE_BIT_EN_0 */
	0x10270238, 0xFFFFFFFF, 0xFE9F807F,/* DRAMC_IDLE_BIT_EN_0 */
	0x1027023C, 0xFFFFFFFF, 0x1F0F607B,/* DRAMC_IDLE_BIT_EN_1 */
	0x10270300, 0x40, 0x0,/* DCM_FR */
	0x10270304, 0xBF, 0x0,/* DCM_STALL_EN */
	0x10270308, 0xFF, 0xFF,/* DCM_MODE */
	0x10270500, 0xFFFF, 0xFFFF,/* SWCG_EN */
	0x10270A80, 0xFFFFFFFF, 0x0,/* DDR_BIT_EN_0 */
	0x10270A84, 0xFFFFFFFF, 0x38,/* DDR_BIT_EN_1 */
	0x1030C300, 0xFE, 0x0,/* SMI_DCM */
	0x10943008, 0x40000FFF, 0x40000FFF,/* SSPM_DCM_CTRL */
	0x11035014, 0x1000292, 0x1000292,/* VDNR_DCM_TOP_PERI_PAR_BUS_u_PERI_PAR_BUS_CTRL_0 */
	0x11035018, 0x400, 0x400,/* VDNR_DCM_TOP_PERI_PAR_BUS_u_PERI_PAR_BUS_CTRL_1 */
	0x11050000, 0x60000000, 0x60000000,/* AUDIO_TOP_CON0 */
	0x11200950, 0x1000000, 0x1000000,/* HDMA_CFG */
	0x11203E00, 0x10000, 0x10000,/* SSUSB_IP_PW_CTRL0 */
	0x11203E04, 0x1, 0x1,/* SSUSB_IP_PW_CTRL1 */
	0x11203E08, 0x1, 0x1,/* SSUSB_IP_PW_CTRL2 */
	0x11203E0C, 0x1, 0x1,/* SSUSB_IP_PW_CTRL3 */
	0x11203E30, 0xA, 0xA,/* SSUSB_U3_CTRL_0P */
	0x11203E50, 0xA, 0xA,/* SSUSB_U2_CTRL_0P */
	0x11203E88, 0x3, 0x3,/* SSUSB_CSR_CK_CTRL */
	0x11203E8C, 0x1F, 0x1F,/* SSUSB_REF_CK_CTRL */
	0x112A0014, 0x8000000, 0x0,/* MP_GLB_DIG_14 */
	0x112BA01C, 0x200052, 0x200052,/* VDNR_DCM_TOP_UFS_BUS_u_UFS_BUS_CTRL_0 */
	0x13FBF010, 0x3FF7F, 0xC03F,/* MFG_DCM_CON_0 */
	0x13FBF024, 0x1, 0x1,/* MFG_ASYNC_CON_1 */
	0x13FBF0B0, 0x700, 0x0,/* MFG_GLOBAL_CON */
	0x13FBF0B4, 0x10, 0x10,/* MFG_QCHANNEL_CON */
	0x14000120, 0xFFFFFFFF, 0x0,/* MMSYS_HW_DCM_1ST_DIS0 */
	0x14000124, 0xFFFFFFFF, 0x0,/* MMSYS_HW_DCM_1ST_DIS_SET0 */
	0x14000128, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_1ST_DIS_CLR0 */
	0x14000130, 0x1, 0x0,/* MMSYS_HW_DCM_1ST_DIS1 */
	0x14000134, 0x1, 0x0,/* MMSYS_HW_DCM_1ST_DIS_SET1 */
	0x14000138, 0x1, 0x1,/* MMSYS_HW_DCM_1ST_DIS_CLR1 */
	0x14000140, 0x3FFFFFFF, 0x0,/* MMSYS_HW_DCM_2ND_DIS0 */
	0x14000144, 0x3FFFFFFF, 0x0,/* MMSYS_HW_DCM_2ND_DIS_SET0 */
	0x14000148, 0x3FFFFFFF, 0x3FFFFFFF,/* MMSYS_HW_DCM_2ND_DIS_CLR0 */
	0x14000150, 0x1, 0x0,/* MMSYS_HW_DCM_2ND_DIS1 */
	0x14000154, 0x1, 0x0,/* MMSYS_HW_DCM_2ND_DIS_SET1 */
	0x14000158, 0x1, 0x1,/* MMSYS_HW_DCM_2ND_DIS_CLR1 */
	0x140001C0, 0xFFFFFFFF, 0x0,/* MMSYS_HW_DCM_2ND_DIS2 */
	0x1400F1F0, 0xFFFFFFFF, 0x0,/* DISP_POSTMASK_FUNC_DCM0 */
	0x1400F1F4, 0xFFFFFFFF, 0x0,/* DISP_POSTMASK_FUNC_DCM1 */
	0x14021014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x14022014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1502E014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1502F300, 0xFE, 0x0,/* SMI_DCM */
	0x1602E014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1602F018, 0x1, 0x0,/* VDEC_DCM_CON */
	0x1602F218, 0x1, 0x0,/* LAT_DCM_CON */
	0x17010014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x17030300, 0x1, 0x0,/* JPGENC_DCM_CTRL */
	0x1A001014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1A002014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1A00C300, 0xFE, 0x0,/* SMI_DCM */
	0x1A00D300, 0xFE, 0x0,/* SMI_DCM */
	0x1A00F014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1A010014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1B00E300, 0xFE, 0x0,/* SMI_DCM */
	0x1B00F014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
	0x1C014008, 0x1, 0x1,/* DCM_CTRL */
	0x1C014010, 0xFFFFFFFF, 0xFFFFFFFF,/* INF_CK_DCM_EN */
	0x1C014014, 0x7F, 0x7F,/* OTHER_CK_DCM_EN */
	0x1C0170A4, 0x3E013, 0x13,/* VDNR_DCM_TOP_VLP_PAR_BUS_u_VLP_PAR_BUS_CTRL_0 */
	0x1C343004, 0x100, 0x100,/* SSPM_MCLK_DIV */
	0x1C343008, 0x1FFFFF, 0x1FBFFF,/* SSPM_DCM_CTRL */
	0x1C7B1F88, 0x7, 0x7,/* I2C1_CHN_HW_CG_EN */
	0x1C7B5F88, 0x7, 0x7,/* I2C5_CHN_HW_CG_EN */
	0x1C7B6F88, 0x7, 0x7,/* I2C6_CHN_HW_CG_EN */
	0x1C804008, 0x1, 0x1,/* DCM_CTRL */
	0x1C804010, 0xFFFFFFFF, 0xFFFFFFFF,/* INF_CK_DCM_EN */
	0x1C804014, 0x7F, 0x7F,/* OTHER_CK_DCM_EN */
	0x1E800150, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS0 */
	0x1E800160, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS1 */
	0x1E800170, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS2 */
	0x1E800180, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS3 */
	0x1E800190, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS4 */
	0x1E801300, 0xFE, 0x0,/* SMI_DCM */
	0x1E802050, 0x7FFFFF, 0x0,/* MMU_DCM_DIS */
	0x1E807300, 0xFE, 0x0,/* SMI_DCM */
	0x1E808300, 0xFE, 0x0,/* SMI_DCM */
	0x1E809300, 0xFE, 0x0,/* SMI_DCM */
	0x1E80A300, 0xFE, 0x0,/* SMI_DCM */
	0x1E9800F0, 0xFFFF, 0xFFFF,/* GCE_CTL_INT0 */
	0x1E9900F0, 0xFFFF, 0xFFFF,/* GCE_CTL_INT0 */
	0x1F000150, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS0 */
	0x1F000154, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS_SET0 */
	0x1F000158, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_HW_DCM_1ST_DIS_CLR0 */
	0x1F000160, 0xF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS1 */
	0x1F000164, 0xF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS_SET1 */
	0x1F000168, 0xF, 0xF,/* MDPSYS_HW_DCM_1ST_DIS_CLR1 */
	0x1F000170, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS2 */
	0x1F000180, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS3 */
	0x1F000190, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS4 */
	0x1F0001A0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS0 */
	0x1F0001A4, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS_SET0 */
	0x1F0001A8, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_HW_DCM_2ND_DIS_CLR0 */
	0x1F0001B0, 0xF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS1 */
	0x1F0001B4, 0xF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS_SET1 */
	0x1F0001B8, 0xF, 0xF,/* MDPSYS_HW_DCM_2ND_DIS_CLR1 */
	0x1F0001C0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS2 */
	0x1F0001D0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS3 */
	0x1F0001E0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS4 */
	0x1F002014, 0xFFF0, 0xFFF0,/* SMI_LARB_CON_SET */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_suspend =
		AP_DCM_Golden_Setting_tcl_gs_suspend_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_suspend_len = 615;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_sodi_data[] = {
	/*  Address     Mask        Golden Setting Value */
	0x1001A208, 0xFFFF, 0xFFFF,/* DXCC_NEW_HWDCM_CFG */
	0x10219060, 0xFF000000, 0x0,/* EMI_CONM */
	0x10219068, 0xFF000000, 0x0,/* EMI_CONN */
	0x10219830, 0x2000, 0x0,/* EMI_THRO_CTRL0 */
	0x10235008, 0xFF000000, 0x0,/* CHN_EMI_CONB */
	0x102384EC, 0xBFF00, 0x0,/* MISC_CG_CTRL0 */
	0x102384F4, 0x7E000C0, 0x600000,/* MISC_CG_CTRL2 */
	0x10238524, 0x1000000, 0x0,/* MISC_DQSG_RETRY1 */
	0x10238560, 0x40000000, 0x0,/* MISC_APB */
	0x10238644, 0xF, 0x0,/* MISC_CTRL2 */
	0x102484EC, 0xBFF00, 0x0,/* MISC_CG_CTRL0 */
	0x102484F4, 0x7E000C0, 0x600000,/* MISC_CG_CTRL2 */
	0x10248524, 0x1000000, 0x0,/* MISC_DQSG_RETRY1 */
	0x10248560, 0x40000000, 0x0,/* MISC_APB */
	0x10248644, 0xF, 0x0,/* MISC_CTRL2 */
	0x10943008, 0x40000FFF, 0x40000FFF,/* SSPM_DCM_CTRL */
	0x14000120, 0xFFFFFFFF, 0x0,/* MMSYS_HW_DCM_1ST_DIS0 */
	0x14000124, 0xFFFFFFFF, 0x0,/* MMSYS_HW_DCM_1ST_DIS_SET0 */
	0x14000128, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_1ST_DIS_CLR0 */
	0x14000130, 0x1, 0x0,/* MMSYS_HW_DCM_1ST_DIS1 */
	0x14000134, 0x1, 0x0,/* MMSYS_HW_DCM_1ST_DIS_SET1 */
	0x14000138, 0x1, 0x1,/* MMSYS_HW_DCM_1ST_DIS_CLR1 */
	0x14000140, 0x3FFFFFFF, 0x0,/* MMSYS_HW_DCM_2ND_DIS0 */
	0x14000144, 0x3FFFFFFF, 0x0,/* MMSYS_HW_DCM_2ND_DIS_SET0 */
	0x14000148, 0x3FFFFFFF, 0x3FFFFFFF,/* MMSYS_HW_DCM_2ND_DIS_CLR0 */
	0x14000150, 0x1, 0x0,/* MMSYS_HW_DCM_2ND_DIS1 */
	0x14000154, 0x1, 0x0,/* MMSYS_HW_DCM_2ND_DIS_SET1 */
	0x14000158, 0x1, 0x1,/* MMSYS_HW_DCM_2ND_DIS_CLR1 */
	0x140001C0, 0xFFFFFFFF, 0x0,/* MMSYS_HW_DCM_2ND_DIS2 */
	0x1400F1F0, 0xFFFFFFFF, 0x0,/* DISP_POSTMASK_FUNC_DCM0 */
	0x1400F1F4, 0xFFFFFFFF, 0x0,/* DISP_POSTMASK_FUNC_DCM1 */
	0x1602F018, 0x1, 0x0,/* VDEC_DCM_CON */
	0x1602F218, 0x1, 0x0,/* LAT_DCM_CON */
	0x17030300, 0x1, 0x0,/* JPGENC_DCM_CTRL */
	0x1C014008, 0x1, 0x1,/* DCM_CTRL */
	0x1C014010, 0xFFFFFFFF, 0xFFFFFFFF,/* INF_CK_DCM_EN */
	0x1C014014, 0x7F, 0x7F,/* OTHER_CK_DCM_EN */
	0x1C804008, 0x1, 0x1,/* DCM_CTRL */
	0x1C804010, 0xFFFFFFFF, 0xFFFFFFFF,/* INF_CK_DCM_EN */
	0x1C804014, 0x7F, 0x7F,/* OTHER_CK_DCM_EN */
	0x1E800150, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS0 */
	0x1E800160, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS1 */
	0x1E800170, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS2 */
	0x1E800180, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS3 */
	0x1E800190, 0xFFFFFFFF, 0x0,/* MMINFRA_HW_DCM_1ST_DIS4 */
	0x1E802050, 0x7FFFFF, 0x0,/* MMU_DCM_DIS */
	0x1F000150, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS0 */
	0x1F000154, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS_SET0 */
	0x1F000158, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_HW_DCM_1ST_DIS_CLR0 */
	0x1F000160, 0xF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS1 */
	0x1F000164, 0xF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS_SET1 */
	0x1F000168, 0xF, 0xF,/* MDPSYS_HW_DCM_1ST_DIS_CLR1 */
	0x1F000170, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS2 */
	0x1F000180, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS3 */
	0x1F000190, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_1ST_DIS4 */
	0x1F0001A0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS0 */
	0x1F0001A4, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS_SET0 */
	0x1F0001A8, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_HW_DCM_2ND_DIS_CLR0 */
	0x1F0001B0, 0xF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS1 */
	0x1F0001B4, 0xF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS_SET1 */
	0x1F0001B8, 0xF, 0xF,/* MDPSYS_HW_DCM_2ND_DIS_CLR1 */
	0x1F0001C0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS2 */
	0x1F0001D0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS3 */
	0x1F0001E0, 0xFFFFFFFF, 0x0,/* MDPSYS_HW_DCM_2ND_DIS4 */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_sodi =
		AP_DCM_Golden_Setting_tcl_gs_sodi_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_sodi_len = 192;
