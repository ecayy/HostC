#include <stdio.h>
int main(void)
{
	float number1, number2, number3;
		float average;

		printf("\nEnter the first number: ");
		fflush(stdout);
		scanf("%f",&number1);
		printf("\nEnter the second number: ");
		fflush(stdout);
		scanf("%f",&number2);
		printf("\nEnter the third number: ");
		fflush(stdout);
		scanf("%f",&number3);

		average = (number1 + number2 + number3) / 3;
		printf("\nAverage is : %f\n",average);

		printf("Press Enter \n");
		while(getchar()!= '\n')
		{

		}
		getchar();

}