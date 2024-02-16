


#include "GPIO.h"




void GPIO_TogglePin(GPIO_Struct *Port, GPIO_Pin pin)
{
	//pin ^=(1<<position)
	Port->GPIO_ODR_OFFSET ^= pin;  // 11^10=01
}
void GPIO_Lock_Pin(GPIO_Struct *Port, GPIO_Pin pin, uint8_t Lock_Unlock)
{
	Port->GPIO_LCKR_OFFSET = Lock_Unlock & pin;
}
