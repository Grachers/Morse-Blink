#ifndef __MORSE_H__

#define __MORSE_H__

#include "stm32f10x.h"
#include "tim.h"

#define DELAY_TIME_ELEMENT 100

void message(char* message);

void dot(void);
void dash(void);
void blank(void);

void letterBlank(void);
void wordBlank(void);

void A(void);
void B(void);
void C(void);
void D(void);
void E(void);
void F(void);
void G(void);
void H(void);
void I(void);
void J(void);
void K(void);
void L(void);
void M(void);
void N(void);
void O(void);
void P(void);
void Q(void);
void R(void);
void S(void);
void T(void);
void U(void);
void V(void);
void W(void);
void X(void);
void Y(void);
void Z(void);
void one(void);
void two(void);
void three(void);
void four(void);
void five(void);
void six(void);
void seven(void);
void eight(void);
void nine(void);
void zero(void);

#endif /*__MORSE_H__*/
