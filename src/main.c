#include "stm8s.h"
#include "stm8s_it.h"

void main()
{
    GPIO_Init(GPIOB, GPIO_PIN_5, GPIO_MODE_OUT_PP_HIGH_FAST);
    while (1)
    {
        GPIO_WriteReverse(GPIOB, GPIO_PIN_5);
        for (volatile uint16_t i = 0; i < 16000; ++i);
    }
}

void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  // just make the warning go away
  file;
  line;
  /* Infinite loop */
  while (1)
  {
  }
}