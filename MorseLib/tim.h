#ifndef __TIM_H__

#define __TIM_H__

#include "stm32f10x.h"

extern int myTicks;

void timerInit(void);
void delaymicrosec(int dUs);
void delaymilisec(int dMs);

#endif /*__TIM_H_*/
