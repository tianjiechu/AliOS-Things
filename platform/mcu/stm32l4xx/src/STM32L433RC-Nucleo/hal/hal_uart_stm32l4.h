/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#ifndef __HAL_UART_STM32L4_H
#define __HAL_UART_STM32L4_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32l4xx_hal.h"  
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "aos/kernel.h"

#define PORT_UART1 1
#define PORT_UART2 2
#define PORT_UART3 3
#define PORT_UART4 4

/***************************** uart1 configure *******************************/
#define UART1                          USART2

#define UART1_BANDRATE           115200	 
#define UART1_WORD_LENGTH        UART_WORDLENGTH_8B		 
#define UART1_STOP_BITS          UART_STOPBITS_1		 
#define UART1_PARITY             UART_PARITY_NONE		 
#define UART1_MODE               UART_MODE_TX_RX 
#define UART1_HW_FLOW_CTL        UART_HWCONTROL_NONE		 
#define UART1_OVER_SAMPLING      UART_OVERSAMPLING_16		 
#define UART1_ONE_BIT_SAMPLING   UART_ONE_BIT_SAMPLE_DISABLE		 
#define UART1_ADV_FEATURE_INIT   UART_ADVFEATURE_NO_INIT		 

#define UART1_CLK_ENABLE()             __HAL_RCC_USART2_CLK_ENABLE()
#define UART1_CLK_DISABLE()            __HAL_RCC_USART2_CLK_DISABLE()
#define UART1_TX_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOA_CLK_ENABLE()
#define UART1_TX_GPIO_CLK_DISABLE()    __HAL_RCC_GPIOA_CLK_DISABLE()
#define UART1_RX_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOD_CLK_ENABLE()
#define UART1_RX_GPIO_CLK_DISABLE()    __HAL_RCC_GPIOD_CLK_DISABLE()

#define UART1_TX_PIN                   GPIO_PIN_2
#define UART1_TX_MODE                  GPIO_MODE_AF_PP
#define UART1_TX_SPEED                 GPIO_SPEED_FREQ_HIGH
#define UART1_TX_PULL                  GPIO_NOPULL
#define UART1_TX_ALTERNATE             GPIO_AF7_USART2
#define UART1_TX_GPIO_PORT             GPIOA

#define UART1_RX_PIN                   GPIO_PIN_6
#define UART1_RX_MODE                  GPIO_MODE_AF_PP
#define UART1_RX_ALTERNATE             GPIO_AF7_USART2
#define UART1_RX_GPIO_PORT             GPIOD


#define MAX_BUF_UART_BYTES  1000

#ifdef __cplusplus
}
#endif

#endif /* __HAL_UART_STM32L4_H */
