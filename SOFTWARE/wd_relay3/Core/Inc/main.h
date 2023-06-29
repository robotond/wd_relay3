/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32g0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TRIG_K1_Pin GPIO_PIN_2
#define TRIG_K1_GPIO_Port GPIOB
#define YELLOW_Pin GPIO_PIN_8
#define YELLOW_GPIO_Port GPIOA
#define MODBUS_TX_Pin GPIO_PIN_9
#define MODBUS_TX_GPIO_Port GPIOA
#define PRBLED_Pin GPIO_PIN_6
#define PRBLED_GPIO_Port GPIOC
#define RED_Pin GPIO_PIN_7
#define RED_GPIO_Port GPIOC
#define MODBUS_RX_Pin GPIO_PIN_10
#define MODBUS_RX_GPIO_Port GPIOA
#define GREEN_Pin GPIO_PIN_11
#define GREEN_GPIO_Port GPIOA
#define MODBUS_DE_Pin GPIO_PIN_12
#define MODBUS_DE_GPIO_Port GPIOA
#define WHITE_Pin GPIO_PIN_15
#define WHITE_GPIO_Port GPIOA
#define TRIG_K2_Pin GPIO_PIN_3
#define TRIG_K2_GPIO_Port GPIOB
#define ON_K3_Pin GPIO_PIN_4
#define ON_K3_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
