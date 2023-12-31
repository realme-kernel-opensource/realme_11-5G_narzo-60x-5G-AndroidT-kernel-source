/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2022 MediaTek Inc.
 */

#ifndef __GPUDFD_MT6835_H__
#define __GPUDFD_MT6835_H__

#define GPUDFD_ENABLE                (0)

/*
 * DRM_DEBUG_BASE     : 0x1000_D000
 * DRM_MFG_REG        : 0x1000_D060
 */
#define DRM_MFG_REG                  (g_drm_debug_base + 0x60)

/*
 * MFGCFG_BASE        : 0x13FB_F000
 * MFG_DEBUGMON_CON_00: 0x13FB_F8F8
 * MFG_DFD_CON_0~9    : 0x13FB_FA00 ~ 0x13FB_FA24
 */
#define MFG_DEBUGMON_CON_00          (g_mfg_top_base + 0x8F8)
#define MFG_DFD_CON_0                (g_mfg_top_base + 0xA00)
#define MFG_DFD_CON_1                (g_mfg_top_base + 0xA04)
#define MFG_DFD_CON_2                (g_mfg_top_base + 0xA08)
#define MFG_DFD_CON_3                (g_mfg_top_base + 0xA0C)
#define MFG_DFD_CON_4                (g_mfg_top_base + 0xA10)
#define MFG_DFD_CON_5                (g_mfg_top_base + 0xA14)
#define MFG_DFD_CON_6                (g_mfg_top_base + 0xA18)
#define MFG_DFD_CON_7                (g_mfg_top_base + 0xA1C)
#define MFG_DFD_CON_8                (g_mfg_top_base + 0xA20)
#define MFG_DFD_CON_9                (g_mfg_top_base + 0xA24)
#define MFG_DFD_CON_12               (g_mfg_top_base + 0xA30)
#define MFG_DFD_CON_13               (g_mfg_top_base + 0xA34)
#define MFG_DFD_CON_17               (g_mfg_top_base + 0xA44)
#define MFG_DFD_CON_18               (g_mfg_top_base + 0xA48)
#define MFG_DFD_CON_19               (g_mfg_top_base + 0xA4C)

#define MFG_DEBUGMON_CON_00_ENABLE   (0xFFFFFFFF)
#define MFG_DFD_CON_0_ENABLE         (0x0F001100)
#define MFG_DFD_CON_1_ENABLE         (0x0000D611)
#define MFG_DFD_CON_2_ENABLE         (0x0001ffec)
#define MFG_DFD_CON_3_ENABLE         (0x00200828)
#define MFG_DFD_CON_4_ENABLE         (0x00000000)
#define MFG_DFD_CON_5_ENABLE         (0x00000000)
#define MFG_DFD_CON_6_ENABLE         (0x00000000)
#define MFG_DFD_CON_7_ENABLE         (0x00000000)
#define MFG_DFD_CON_8_ENABLE         (0x00000000)
#define MFG_DFD_CON_9_ENABLE         (0x00000000)
#define MFG_DFD_CON_12_ENABLE        (0x00000000)
#define MFG_DFD_CON_13_ENABLE        (0x00000000)
#define MFG_DFD_CON_17_ENABLE        (0x00000001)
#define MFG_DFD_CON_18_ENABLE        (0x00000000)
#define MFG_DFD_CON_19_ENABLE        (0x00000000)

#define MFG_DEBUGMON_CON_00_DISABLE  (0x00000000)
#define MFG_DFD_CON_0_DISABLE        (0x00000000)
#define MFG_DFD_CON_1_DISABLE        (0x00000000)
#define MFG_DFD_CON_2_DISABLE        (0x00000000)
#define MFG_DFD_CON_3_DISABLE        (0x00000000)
#define MFG_DFD_CON_4_DISABLE        (0x00000000)
#define MFG_DFD_CON_5_DISABLE        (0x00000000)
#define MFG_DFD_CON_6_DISABLE        (0x00000000)
#define MFG_DFD_CON_7_DISABLE        (0x00000000)
#define MFG_DFD_CON_8_DISABLE        (0x00000000)
#define MFG_DFD_CON_9_DISABLE        (0x00000000)
#define MFG_DFD_CON_12_DISABLE       (0x00000000)
#define MFG_DFD_CON_13_DISABLE       (0x00000000)
#define MFG_DFD_CON_17_DISABLE       (0x00000000)
#define MFG_DFD_CON_18_DISABLE       (0x00000000)
#define MFG_DFD_CON_19_DISABLE       (0x00000000)

unsigned int gpudfd_init(struct platform_device *pdev);
unsigned int __gpudfd_get_dfd_force_dump_mode(void);
void __gpudfd_set_dfd_force_dump_mode(unsigned int mode);
void __gpudfd_config_dfd(unsigned int enable);

#endif /* __GPUDFD_MT6835_H__ */
