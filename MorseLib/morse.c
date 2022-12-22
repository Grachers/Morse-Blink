#include "morse.h"

void dot(void)
{
	GPIOB->ODR &= ~GPIO_ODR_ODR12;
	delayMs(DELAY_TIME_ELEMENT);
	GPIOB->ODR |= GPIO_ODR_ODR12;
	delayMs(DELAY_TIME_ELEMENT);
}

void dash(void)
{
	GPIOB->ODR &= ~GPIO_ODR_ODR12;
	delayMs(3*DELAY_TIME_ELEMENT);
	GPIOB->ODR |= GPIO_ODR_ODR12;
	delayMs(DELAY_TIME_ELEMENT);
}

void blank(void)
{
	delayMs(DELAY_TIME_ELEMENT);
}

void letterBlank(void)
{
	delayMs(2*DELAY_TIME_ELEMENT);
}

void wordBlank(void)
{
	delayMs(4*DELAY_TIME_ELEMENT);
}

void message(char* message)
{
	int i;
	
	for(i = 0; i < sizeof(message); i++)
	{
		switch (message[i])
		{
			case 'A':
				A();
				letterBlank();
				break;
			case 'B':
				B();
				letterBlank();
				break;
			case 'C':
				C();
				letterBlank();
				break;
			case 'D':
				D();
				letterBlank();
				break;
			case 'E':
				E();
				letterBlank();
				break;
			case 'F':
				F();
				letterBlank();
				break;
			case 'G':
				G();
				letterBlank();
				break;
			case 'H':
				H();
				letterBlank();
				break;
			case 'I':
				I();
				letterBlank();
				break;
			case 'J':
				J();
				letterBlank();
				break;
			case 'K':
				K();
				letterBlank();
				break;
			case 'L':
				L();
				letterBlank();
				break;
			case 'M':
				M();
				letterBlank();
				break;
			case 'N':
				N();
				letterBlank();
				break;
			case 'O':
				O();
				letterBlank();
				break;
			case 'P':
				P();
				letterBlank();
				break;
			case 'Q':
				Q();
				letterBlank();
				break;
			case 'R':
				R();
				letterBlank();
				break;
			case 'S':
				S();
				letterBlank();
				break;
			case 'T':
				T();
				letterBlank();
				break;
			case 'U':
				U();
				letterBlank();
				break;
			case 'V':
				V();
				letterBlank();
				break;
			case 'W':
				W();
				letterBlank();
				break;
			case 'X':
				X();
				letterBlank();
				break;
			case 'Y':
				Y();
				letterBlank();
				break;
			case 'Z':
				Z();
				letterBlank();
				break;
			case ' ':
				wordBlank();
				break;
			case '1':
				one();
				letterBlank();
				break;
			case '2':
				two();
				letterBlank();
				break;
			case '3':
				three();
				letterBlank();
				break;
			case '4':
				four();
				letterBlank();
				break;
			case '5':
				five();
				letterBlank();
				break;
			case '6':
				six();
				letterBlank();
				break;
			case '7':
				seven();
				letterBlank();
				break;
			case '8':
				eight();
				letterBlank();
				break;
			case '9':
				nine();
				letterBlank();
				break;
			case '0':
				zero();
				letterBlank();
				break;
		}
		
//		/* TO MAKE SURE LOOP IS INFINITE */
//		if (i == sizeof(message))
//		{
//			i = 0;
//		}
	}
}

void A(void)
{
	dot();
	dash();
	blank();
}

void B(void)
{
	dash();
	dot();
	dot();
	dot();
	blank();
}

void C(void)
{
	dash();
	dot();
	dash();
	dot();
	blank();
}

void D(void)
{
	dash();
	dot();
	dot();
	blank();
}

void E(void)
{
	dot();
	blank();
}

void F(void)
{
	dot();
	dot();
	dash();
	dot();
	blank();
}

void G(void)
{
	dash();
	dash();
	dot();
	blank();
}

void H(void)
{
	dot();
	dot();
	dot();
	dot();
	blank();
}

void I(void)
{
	dot();
	dot();
	blank();
}

void J(void)
{
	dot();
	dash();
	dash();
	dash();
	blank();
}

void K(void)
{
	dash();
	dot();
	dash();
	blank();
}

void L(void)
{
	dot();
	dash();
	dot();
	dot();
	blank();
}

void M(void)
{
	dash();
	dash();
	blank();
}

void N(void)
{
	dash();
	dot();
	blank();
}

void O(void)
{
	dash();
	dash();
	dash();
	blank();
}

void P(void)
{
	dot();
	dash();
	dash();
	dot();
	blank();
}

void Q(void)
{
	dash();
	dash();
	dot();
	dash();
	blank();
}

void R(void)
{
	dot();
	dash();
	dot();
	blank();
}

void S(void)
{
	dot();
	dot();
	dot();
	blank();
}

void T(void)
{
	dash();
	blank();
}

void U(void)
{
	dot();
	dot();
	dash();
	blank();
}

void V(void)
{
	dot();
	dot();
	dot();
	dash();
	blank();
}

void W(void)
{
	dot();
	dash();
	dash();
	blank();
}

void X(void)
{
	dash();
	dot();
	dot();
	dash();
	blank();
}

void Y(void)
{
	dash();
	dot();
	dash();
	dash();
	blank();
}

void Z(void)
{
	dash();
	dash();
	dot();
	dot();
	blank();
}

void one(void)
{
	dot();
	dash();
	dash();
	dash();
	dash();
	blank();
}

void two(void)
{
	dot();
	dot();
	dash();
	dash();
	dash();
	blank();
}

void three(void)
{
	dot();
	dot();
	dot();
	dash();
	dash();
	blank();
}

void four(void)
{
	dot();
	dot();
	dot();
	dot();
	dash();
	blank();
}

void five(void)
{
	dot();
	dot();
	dot();
	dot();
	dot();
	blank();
}

void six(void)
{
	dash();
	dot();
	dot();
	dot();
	dot();
	blank();
}

void seven(void)
{
	dash();
	dash();
	dot();
	dot();
	dot();
	blank();
}

void eight(void)
{
	dash();
	dash();
	dash();
	dot();
	dot();
	blank();
}

void nine(void)
{
	dash();
	dash();
	dash();
	dash();
	dot();
	blank();
}

void zero(void)
{
	dash();
	dash();
	dash();
	dash();
	dash();
	blank();
}
