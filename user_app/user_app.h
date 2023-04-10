/********************************************************************************************************
 * @file	user_app.h
 *
 * @brief	for TLSR chips
 *
 * @author	telink
 * @date	Sep. 30, 2010
 *
 * @par     Copyright (c) 2017, Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
 *          All rights reserved.
 *
 *          Licensed under the Apache License, Version 2.0 (the "License");
 *          you may not use this file except in compliance with the License.
 *          You may obtain a copy of the License at
 *
 *              http://www.apache.org/licenses/LICENSE-2.0
 *
 *          Unless required by applicable law or agreed to in writing, software
 *          distributed under the License is distributed on an "AS IS" BASIS,
 *          WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *          See the License for the specific language governing permissions and
 *          limitations under the License.
 *
 *******************************************************************************************************/
#pragma once

#include "proj/tl_common.h"
#include "vendor/mesh/app.h"


/** @addtogroup user_app
  * @{
  */
  
/** @defgroup user_app
  * @brief Common User Code.
  * @{
  */





// --------- function  ----------------
void cb_user_factory_reset_additional();
void cb_user_proc_led_onoff_driver(int on);

void SW2812B_Supply_Enable(void);
void SW2812B_Supply_Disable(void);

extern u8  Last_SW2812B_STATE;
extern u8  Current_SW2812B_STATE;

extern u8 Mesh_Board_Success_Flag;
extern u8 PARK_LOCK_STATE;
extern u32  Park_Lock_Tick;
/**
  * @}
  */

/**
  * @}
  */


