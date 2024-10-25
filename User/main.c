#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
// #include "CHNChar.h"


uint8_t KeyNum;

int main(void)
{
	OLED_Init();
	OLED_Clear();
	
	OLED_ShowCHNChar(3, 1, 0);  // 0 for Chinese Character KUN
	Delay_ms(1000);
	
	uint8_t i;
	for (i = 0; i < 15; i++)
	{
		i = 4;
		OLED_ShowKun(i);
		Delay_ms(41);
	}
	Delay_ms(600);
	while (1)
	{
		OLED_Clear();
		OLED_ShowString(3, 1, "iKUN");
	}
}
