#include <stdio.h>
int main(void)
{
	int num1 , num2;
	printf("Enter the first number(integer):");
	fflush(stdout);
	scanf("%d",&num1);
	printf("Enter the second number(integer):");
	fflush(stdout);
	scanf("%d",&num2);

	if (num1 == num2){
		printf("Numbers are equal\n");
	}else{
		if(num1 > num2){
		printf("num1 is bigger\n",num1);
		}else{
			if(num2 > num1){
				printf("num2 is bigger\n",num2);
			}

		}

	}




}
