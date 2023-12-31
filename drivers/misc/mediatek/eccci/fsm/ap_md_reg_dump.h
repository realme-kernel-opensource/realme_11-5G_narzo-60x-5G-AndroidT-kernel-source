/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2019 MediaTek Inc.
 */

#ifndef __AP_MD_REG_DUMP_H__
#define __AP_MD_REG_DUMP_H__

enum MD_REG_ID {
	MD_REG_SET_DBGSYS_TIME_OUT_ADDR = 0,
	MD_REG_PC_MONITOR_ADDR,
	MD_REG_BUSMON_ADDR_0,
	MD_REG_BUSMON_ADDR_1,
	MD_REG_USIP_ADDR_0,
	MD_REG_USIP_ADDR_1,
	MD_REG_USIP_ADDR_2,
	MD_REG_USIP_ADDR_3,
	MD_REG_USIP_ADDR_4,
	MD_REG_USIP_ADDR_5,
};

enum md_reg_id {
	MD_REG_DUMP_START = 0,
	MD_REG_DUMP_STAGE,
	MD_REG_GET_DUMP_ADDRESS,
};

/* res.a2 in MD_REG_DUMP_STAGE OP */
enum md_dump_flag {
	DUMP_FINISHED,
	DUMP_UNFINISHED,
	DUMP_DELAY_us,
};

#define MD_REG_DUMP_MAGIC   (0x44554D50) /* DUMP */

void md_dump_register_6873(void);
void md_dump_reg(struct ccci_modem *md);
#endif
