#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void)
{
	int height;
	printf("Enter the height for pyramid: ");
	scanf("%d",&height);

	for(int i = 1; 1 <= height ; i++ )
	{
		for(int j = i; j > 0 ; j-- )
		{
			printf("%d ",j);
		}
		printf("\n");
	}


	wait_for_user_input();



}


void wait_for_user_input(void)
{

	printf("Press enter key to exit this application");

 while(getchar() != '\n')
 {
 	//just read the input buffer and do nothing
 }
 getchar();

}
