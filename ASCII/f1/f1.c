#include<stdio.h>
int function_add_numbers(int a, int b, int c);

int main()
{
	printf("Sum = %d\n", function_add_numbers(12,13,14));

	return 0;
}

int function_add_numbers(int a, int b, int c)
{
	int sum;
	sum = a+b+c;

	return sum;
}


