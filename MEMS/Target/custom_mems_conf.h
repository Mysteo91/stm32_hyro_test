/**
 ******************************************************************************
 * @file    custom_mems_conf.h
 * @author  MEMS Application Team
 * @brief   This file contains definitions of the MEMS components bus interfaces for custom boards
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under Software License Agreement SLA0077,
 * the "License". You may not use this component except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        www.st.com/sla0077
 *
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CUSTOM_MEMS_CONF_H__
#define __CUSTOM_MEMS_CONF_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
#include "b_l475e_iot01a2_bus.h"
#include "b_l475e_iot01a2_errno.h"

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

#define USE_CUSTOM_MOTION_SENSOR_LSM6DSL_0        1U

#define USE_CUSTOM_MOTION_SENSOR_LIS3MDL_0        1U

#define CUSTOM_LSM6DSL_0_I2C_Init BSP_I2C2_Init
#define CUSTOM_LSM6DSL_0_I2C_DeInit BSP_I2C2_DeInit
#define CUSTOM_LSM6DSL_0_I2C_ReadReg BSP_I2C2_ReadReg
#define CUSTOM_LSM6DSL_0_I2C_WriteReg BSP_I2C2_WriteReg

#define CUSTOM_LIS3MDL_0_I2C_Init BSP_I2C2_Init
#define CUSTOM_LIS3MDL_0_I2C_DeInit BSP_I2C2_DeInit
#define CUSTOM_LIS3MDL_0_I2C_ReadReg BSP_I2C2_ReadReg
#define CUSTOM_LIS3MDL_0_I2C_WriteReg BSP_I2C2_WriteReg

#ifdef __cplusplus
}
#endif

#endif /* __CUSTOM_MEMS_CONF_H__*/

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
