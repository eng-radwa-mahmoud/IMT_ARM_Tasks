																/*Radwa Mahmoud*/


#ifndef		RCC_INTERFACE_H
#define		RCC_INTERFACE_H

#define		RCC_AHB1		0
#define		RCC_AHB2		1
#define		RCC_APB1		2
#define		RCC_APB2		3

void RCC_voidSyslClkInit(u8 clock_type , u8 pll_mode);

void RCC_voidEnablePerClk(u8 Bus,u8 Per);

void RCC_voidDisablePerClk(u8 Bus,u8 Per);





#endif