// SPDX-License-Identifier: GPL-2.0-only
/*
 * Backlight driver for Maxim MAX25014ATG/V+
 *
 * Copyright (C) 2023 GOcontroll B.V.
 *      Maud Spierings <maudspierings@gocontroll.com>
 */

#ifndef __LINUX_MFD_MAX25014ATG_H
#define __LINUX_MFD_MAX25014ATG_H

#define MAX25014_DEV_ID         (0x00U)
#define MAX25014_REV_ID         (0x01U)
#define MAX25014_ISET           (0x02U)
#define MAX25014_IMODE          (0x03U)
#define MAX25014_TON1H          (0x04U)
#define MAX25014_TON1L          (0x05U)
#define MAX25014_TON2H          (0x06U)
#define MAX25014_TON2L          (0x07U)
#define MAX25014_TON3H          (0x08U)
#define MAX25014_TON3L          (0x09U)
#define MAX25014_TON4H          (0x0AU)
#define MAX25014_TON4L          (0x0BU)
#define MAX25014_TON_1_4_LSB    (0x0CU)
#define MAX25014_SETTING        (0x12U)
#define MAX25014_DISABLE        (0x13U)
#define MAX25014_BSTMON         (0x14U)
#define MAX25014_IOUT1          (0x15U)
#define MAX25014_IOUT2          (0x16U)
#define MAX25014_IOUT3          (0x17U)
#define MAX25014_IOUT4          (0x18U)
#define MAX25014_OPEN           (0x1BU)
#define MAX25014_SHORT_GND      (0x1CU)
#define MAX25014_SHORT_LED      (0x1DU)
#define MAX25014_MASK           (0x1EU)
#define MAX25014_DIAG           (0x1FU)

#define MAX25014_REGISTERS_MAX  (0x1FU)

#define MAX25014_DIM_MODE       (0x04U)
#define MAX25014_ENABLE         BIT(5)
#define MAX25014_PSEN           BIT(4)

#define MAX25014_STRINGS_MASKS  {0x0fU,0x0EU,0x0CU,0x08U,0x00U}

#define MAX25014_ISET_DEFAULT_100 11U

struct max25014_platform_data {
    const char *name;
	uint32_t initial_brightness;
	uint32_t iset;
    uint8_t strings[4];
};

#endif