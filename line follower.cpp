/*
 * LINE_FOLLOWER.cpp
 *
 * Created: 25-Jan-19 4:40:54 PM
 *  Author: HP
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0XFF;
	DDRD&=~(1<<);
	DDRD&=~(1<<);
	
    while(1)
    {
		if(PIND&(1<<0)&&(PIND&(1<<0)))
		{
			PORTC=0X00;
		}
		else if(PIND&(1<<0)&&(PIND&~(1<<0)))
		{
			PORTC=0X01;
		}
		else if(PIND&~(1<<0)&&(PIND&(1<<0)))
		{
			PORTC=0X10;
		}
		else if (PIND&)
		{
		}
        //TODO:: Please write your application code 
    }
}
