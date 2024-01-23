

#include "math.h"

int main(void)

{

	printf("Add : %X\n", math_add(0x0fff1111, 0x0fff1111));

	printf("Mul : %I64x\n", math_mul(0x0fff1111, 0x0fff1111));

	printf("Div : %f\n", math_div(100, 8));

	return 0;

}

