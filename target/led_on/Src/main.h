/*
 * main.h
 *
 *  Created on: Jul 16, 2026
 *      Author: josab
 */

#ifndef MAIN_H_
#define MAIN_H_

#include<stdint.h>
typedef struct
{
	uint32_t ADIOEN :1;
	uint32_t RESERVED_1 :1;
	uint32_t IOPAEN :1;
	uint32_t IOPBEN :1;
	uint32_t IOPCEN :1;
	uint32_t IOPDEN :1;
	uint32_t IOPEEN :1;
	uint32_t IOPFEN :1;
	uint32_t IOPGEN :1;
	uint32_t ADC1EN :1;
	uint32_t ADC2EN :1;
	uint32_t TIM1EN :1;
	uint32_t SPI1EN :1;
	uint32_t TIM88EN :1;
	uint32_t USART1EN :1;
	uint32_t ADC3EN :1;
	uint32_t RESERVED_2 :3;
	uint32_t TIM9EN :1;
	uint32_t TIM10EN :1;
	uint32_t TIM11EN :1;
	uint32_t RESERVED_3 :10;

}RCC_APB2ENR;

typedef struct
{
    uint32_t MODE8      :2;
    uint32_t CNF8       :2;

    uint32_t MODE9      :2;
    uint32_t CNF9       :2;

    uint32_t MODE10     :2;
    uint32_t CNF10      :2;

    uint32_t MODE11     :2;
    uint32_t CNF11      :2;

    uint32_t MODE12     :2;
    uint32_t CNF12      :2;

    uint32_t MODE13     :2;
    uint32_t CNF13      :2;

    uint32_t MODE14     :2;
    uint32_t CNF14      :2;

    uint32_t MODE15     :2;
    uint32_t CNF15      :2;

} GPIOx_CRH;

typedef struct
{
    uint32_t ODR0       :1;
    uint32_t ODR1       :1;
    uint32_t ODR2       :1;
    uint32_t ODR3       :1;
    uint32_t ODR4       :1;
    uint32_t ODR5       :1;
    uint32_t ODR6       :1;
    uint32_t ODR7       :1;

    uint32_t ODR8       :1;
    uint32_t ODR9       :1;
    uint32_t ODR10      :1;
    uint32_t ODR11      :1;
    uint32_t ODR12      :1;
    uint32_t ODR13      :1;
    uint32_t ODR14      :1;
    uint32_t ODR15      :1;

    uint32_t RESERVED   :16;

} GPIOx_ODR;


typedef struct
{
    uint32_t MODE0      :2;
    uint32_t CNF0       :2;

    uint32_t MODE1      :2;
    uint32_t CNF1       :2;

    uint32_t MODE2      :2;
    uint32_t CNF2       :2;

    uint32_t MODE3      :2;
    uint32_t CNF3       :2;

    uint32_t MODE4      :2;
    uint32_t CNF4       :2;

    uint32_t MODE5      :2;
    uint32_t CNF5       :2;

    uint32_t MODE6      :2;
    uint32_t CNF6       :2;

    uint32_t MODE7      :2;
    uint32_t CNF7       :2;

} GPIOx_CRL;



typedef struct
{
    uint32_t IDR0       :1;
    uint32_t IDR1       :1;
    uint32_t IDR2       :1;
    uint32_t IDR3       :1;
    uint32_t IDR4       :1;
    uint32_t IDR5       :1;
    uint32_t IDR6       :1;
    uint32_t IDR7       :1;

    uint32_t IDR8       :1;
    uint32_t IDR9       :1;
    uint32_t IDR10      :1;
    uint32_t IDR11      :1;
    uint32_t IDR12      :1;
    uint32_t IDR13      :1;
    uint32_t IDR14      :1;
    uint32_t IDR15      :1;

    uint32_t RESERVED   :16;

} GPIOx_IDR;


#endif /* MAIN_H_ */
