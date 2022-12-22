#include "morse.h"
#include "led.h"
#include "tim.h"


/* ENTER YOUR MESSAGE HERE */

#define MESSAGE "ABOBA"

int main(void)
{
	timerInit();
	ledInit();
	
	while(1)
	{
		message(MESSAGE);
	}
}
