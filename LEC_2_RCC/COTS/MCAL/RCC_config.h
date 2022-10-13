																	/*Radwa Mahmoud*/
																	
#ifndef		RCC_CONFIG_H
#define		RCC_CONFIG_H

#define x 5

//BUSES
#define		RCC_AHB1		0
#define		RCC_AHB2		1
#define		RCC_APB1		2
#define		RCC_APB2		3

#define		PLL_ON			1

//AHB1_REG
#define     GPIOAEN_PER		0
#define     GPIOBEN_PER		1
#define     GPIOCEN_PER		2
#define     GPIODEN_PER		3	
#define     GPIOEEN_PER		4
#define     GPIOHEN_PER		7
#define     CRC_PER		    12
#define     DMA1EN_PER		21
#define     DMA2EN_PER		22


//AHB2_REG
#define     OTGFSEN_PER		7


//APB1_REG
#define     TIM2EN_PER		0
#define     TIM3EN_PER		1
#define     TIM4EN_PER		2
#define     TIM5EN_PER		3
#define     WWDGEN_PER		11
#define     SPI2EN_PER		14
#define     SPI3EN_PER		15
#define     USART2EN_PER	17
#define     I2C1EN_PER		21
#define     I2C2EN_PER		22
#define     I2C3EN_PER		23
#define     PWREN_PER		28


//APB2_REG
#define     TIM1EN_PER		0
#define     USART1EN_PER	4
#define     USART6EN_PER	5
#define     ADC1EN_PER		8
#define     SDIOEN_PER		11
#define     SPI1EN_PER		12
#define     SPI4AEN_PER		13
#define     SYSCFGEN_PER	14
#define     TIM9EN_PER		16
#define     TIM10EN_PER		17
#define     TIM11EN_PER		18


//RCC_CREG
#define		HSI_EN		0
#define		HSE_EN		16
#define		PLL_EN		24


//CLK_CONFIG 
//CLK_TYPE --> (HSI || HSE)
//PLL_MODE --> (PLL_ON || PLL_OFF)
#define     CLK_TYPE	HSI
#define     PLL_MODE	PLL_ON









#endif