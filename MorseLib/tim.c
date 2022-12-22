#include "tim.h"

int myTicks = 0;

void timerInit(void)
{
	RCC->APB1ENR |= RCC_APB1ENR_TIM4EN;
	
	TIM4->PSC = 0;
	TIM4->ARR = 72;
	TIM4->CR1 |= TIM_CR1_URS;
	TIM4->DIER |= TIM_DIER_UIE;
	TIM4->EGR |= TIM_EGR_UG;
	
	NVIC_EnableIRQ(TIM4_IRQn);
}

void delaymicrosec(int dUs)
{
	TIM4->CR1 |= TIM_CR1_CEN;
	myTicks = 0;
	while(myTicks < dUs);
	TIM4->CR1 &= ~TIM_CR1_CEN;
}


void delaymilisec(int dMs)
{
	TIM4->CR1 |= TIM_CR1_CEN;
	myTicks = 0;
	while(myTicks < dMs*1000);
	TIM4->CR1 &= ~TIM_CR1_CEN;
}

void TIM4_IRQHandler(void)
{
	myTicks++;
	TIM4->SR &= ~TIM_SR_UIF;
}
