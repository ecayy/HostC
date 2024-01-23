#include <stdio.h>
#include <stdint.h>

int main(void)

{
	uint8_t key_read = read_keypad();

	switch(key_read)

	{
	case 1:
		all_leds_race();
		break;

	case 2:
		all_leds_on();
		break;
	case 3:
		all_leds_toogle();
		break;

	case 4:
		all_leds_blink();
		break;

	default :
		all_leds_off();
		printf("Invalidkey ! Please enter number between (1 to 4) only \n");

	}
}
