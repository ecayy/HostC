#include <stdio.h>
#include <stdint.h>

int main(void)

{
	uint8_t someData[10] = {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};
	printf("Before : 2nd data item =%x\n",*(someData+1));

	*(someData+1) = 0x9;

	printf("After : 2nd data item =%x\n",*(someData+1));


	return 0;

}
