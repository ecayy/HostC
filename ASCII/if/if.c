#include <stdio.h>
int main(void)

{
	int age;

	printf("Enter your age for vote\n", age);
	fflush(stdout);
	scanf("%d",&age);

	if ( age >= 18 ){
	printf("YOU CAN VOTE!\n");
	}else{
	printf("YOU CAN'T VOTE!\n");
	}


}
