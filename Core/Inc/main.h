/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
int16_t ax, ay, az, gx, gy, gz;
double preInterval, interval, angleAccX, angleAccY, angleGyroX, angleGyroY, angleGyroZ, AngleX, AngleY, AngleZ;
int16_t axoffset[15],ayoffset[15],azoffset[15],gxoffset[15],gyoffset[15],gzoffset[15];
double GyroX;

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
typedef enum
{
	ALLSENSORS = 0,
	PALM_LEFT = 1,
	WRIST_LEFT = 2
}Sensor;

void getAngle();
void MPU6050_getMotion(Sensor which_sensor);
void MPU6050_init(Sensor which_sensor);
void set(Sensor which_sensor);
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

#define PALM_LEFT_Port GPIOA
#define PALM_LEFT_Pin GPIO_PIN_5		//This translates to arduino pin 0 on the STM32F446RE
#define WRIST_LEFT_Port GPIOA
#define WRIST_LEFT_Pin GPIO_PIN_2		//This translates to arduino pin 1 on the STM32F446RE
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
