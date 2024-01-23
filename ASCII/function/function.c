#include <stdio.h>

void function_add_numbers(int , int , int );
int main()

{
	function_add_numbers(12,13,14);
	function_add_numbers(-20,-20,56);


	int valueA = 90, valueB = 70;
	function_add_numbers(valueA,valueB,90);

	return 0;

}

void function_add_numbers(int a, int b, int c)
{
	int sum;
	sum = a + b + c;
	printf("sum = %d\n",sum);

}
