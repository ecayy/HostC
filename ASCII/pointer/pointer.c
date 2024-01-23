#include <stdio.h>
int main(void)

{

	char data = 100;
	printf("Value of data is : %d\n,",data);
	printf("Address of the variable data is : %p\n", &data);


	//create a pointer variable and store the address of data variable
	char* pAddress = &data;

	char value  = *pAddress;
	printf("read value is : %d\n",value);

	*pAddress = 65;
	printf("Value of data is : %d\n",data);


	return 0;


}

