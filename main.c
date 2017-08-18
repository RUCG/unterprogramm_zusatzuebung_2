#include <stdlib.h>
#include <avr/io.h>

#define TASTER1 !(PINB & (1<<PB1))// Überflüssig in diesem Programm
#define TASTER2 (PINB & (1<<PB2))// Überflüssig in diesem Programm



void led(char nr, char zust)
{
	
	switch(nr)
		{
		case 0: if(zust)
				{
				PORTD &= ~(1<<PD0), ~(1<<PD1), ~(1<<PD2), ~(1<<PD3), ~(1<<PD4), ~(1<<PD5), ~(1<<PD6), ~(1<<PD7);
				}
				break;
				
		case 1:	{
				PORTD |=(1<<PD0);
				}
				break;
				
		case 2:	{
				PORTD |=(1<<PD0), PORTD |=(1<<PD1);
				}
				
				break;
				
		case 3: {
				PORTD |=(1<<PD0), PORTD |=(1<<PD1), PORTD |=(1<<PD2);
				}
				break;
				
		case 4: {
				PORTD |=(1<<PD0), PORTD |=(1<<PD1), PORTD |=(1<<PD2), PORTD |=(1<<PD3);
				}
				break;
				
		case 5: {
				PORTD |=(1<<PD0), PORTD |=(1<<PD1), PORTD |=(1<<PD2), PORTD |=(1<<PD3), PORTD |=(1<<PD4);
				}
				break;
				
		case 6: {
				PORTD |=(1<<PD0), PORTD |=(1<<PD1), PORTD |=(1<<PD2), PORTD |=(1<<PD3), PORTD |=(1<<PD4), PORTD |=(1<<PD5);
				}
				break;	
			
		case 7: {
				PORTD |=(1<<PD0), PORTD |=(1<<PD1), PORTD |=(1<<PD2), PORTD |=(1<<PD3), PORTD |=(1<<PD4), PORTD |=(1<<PD5), PORTD |=(1<<PD6);
				}
				break;	
			
		case 8: {
				PORTD |=(1<<PD0), PORTD |=(1<<PD1), PORTD |=(1<<PD2), PORTD |=(1<<PD3), PORTD |=(1<<PD4), PORTD |=(1<<PD5); PORTD |=(1<<PD6), PORTD |=(1<<PD7);
				}
				break;
			
		case 9: {
				PORTD |=(1<<PD0), PORTD |=(1<<PD1), PORTD |=(1<<PD2), PORTD |=(1<<PD3), PORTD |=(1<<PD4), PORTD |=(1<<PD5); PORTD |=(1<<PD6), PORTD |=(1<<PD7), PORTC |=(1<<PC0);
				}
				break;
			
		
		}
	
}

int main(void)
{
	
	DDRB = 0x00; // PORTB als Eingang definiert
	PORTB = 0xFF; // Interner Pull-up gesetzt
	
	DDRC = 0xFF;// PORTC wird als Ausgang definiert um die 9te LED zu speisen
	PORTC = 0X00;// Der Ausgang wird zu begin auf 0 gesetzt
	
	DDRD = 0xFF; // PORTD wird als Ausgang definiert
	PORTD = 0x00;// Der Ausgang wird zu begin auf 0 gesetzt
	
	
	
while(1)
{

	{
	led(9,1);
	}	

}
	
	

return 0;
}