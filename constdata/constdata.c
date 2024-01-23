#include <stdio.h>
#include <stdint.h>

// uint8_t const data = 10; // program will crush

int main(void)

{

	uint8_t const data = 10;

	printf("Value = %u\n", data);

	uint8_t *ptr = (uint8_t*)&data;

	*ptr = 50;

	printf("Value = %u\n", data);


	getchar();


}
