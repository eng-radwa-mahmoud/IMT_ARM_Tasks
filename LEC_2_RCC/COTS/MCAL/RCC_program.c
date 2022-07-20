																	/*Radwa Mahmoud*/
																	
#include 	"STD_TYPES.h"
#include 	"BIT_MATH.h"

#include		"RCC_interface.h"
#include		"RCC_private.h"
#include		"RCC_config.h"


void RCC_voidSyslClkInit(u8 clock_type , u8 pll_mode)

{
	switch(clock_type)
	{
		case HSI : SET_BIT(RCC_CR,HSI_EN);
		case HSE : SET_BIT(RCC_CR,HSE_EN);
	}
	
	switch(pll_mode)
	{
		case PLL_ON : SET_BIT(RCC_CR,PLL_EN)
	}
}

void RCC_voidEnablePerClk(u8 Bus,u8 Per)
{
	if(Per<32)
	{
		switch(Bus)
		{
			case RCC_AHB1 : SET_BIT(AHB1ENR,Per);
			case RCC_AHB2 : SET_BIT(AHB2ENR,Per);
			case RCC_APB1 : SET_BIT(APB1ENR,Per);
			case RCC_APB2 : SET_BIT(APB2ENR,Per);
		}
	}
	else
	{
		
	}
}

void RCC_voidDisablePerClk(u8 Bus,u8 Per)
{
		if(Per<32)
	{
		switch(Bus)
		{
			case RCC_AHB1 : CLR_BIT(AHB1ENR,Per);
			case RCC_AHB2 : CLR_BIT(AHB2ENR,Per);
			case RCC_APB1 : CLR_BIT(APB1ENR,Per);
			case RCC_APB2 : CLR_BIT(APB2ENR,Per);
		}
	}
	else
	{
		
	}
}
}