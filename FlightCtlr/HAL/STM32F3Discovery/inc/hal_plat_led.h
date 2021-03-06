/**
 ******************************************************************************
 * @file    hal_plat_led.h
 * @author  Philippose Rajan
 * @date    06.06.2014
 * @brief   <Put in a brief description here>
 *
 * @see     The GNU Public License (GPL) Version 3
 *
 ******************************************************************************
 */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef __hal_plat_led_H
#define __hal_plat_led_H

#include "hal_plat_base.h"

/* ---- Publicly visible Macros ---------------------------------------- */

/* ---- Publicly visible Variables and Constants ----------------------- */

/* ---- Publicly visible Functions ------------------------------------- */
extern HAL_Errors HAL_Plat_configLED(PLAT_LED_Pins led, bool inverted);

extern void HAL_Plat_setLEDPin(PLAT_LED_Pins led);

extern void HAL_Plat_resetLEDPin(PLAT_LED_Pins led);

extern void HAL_Plat_toggleLEDPin(PLAT_LED_Pins led);

#endif /* __hal_plat_led_H */

