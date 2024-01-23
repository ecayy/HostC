#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;


int main(void)

{

	//char *pAddress = (char*)&g_data;

	//printf("value of pAddress %p\n",pAddress);
	//printf("value of pAddress  %p is %x\n",pAddress, *pAddress);

	//pAddress = pAddress + 5;

	//printf("value of pAddress %p\n",pAddress);
	//printf("value of pAddress  %p is %x\n",pAddress, *pAddress);


		//short *pAddress = (short*)&g_data;

	//	printf("value of pAddress %p\n",pAddress);
	//	printf("value of pAddress  %p is %x\n",pAddress, *pAddress);

	//	pAddress = pAddress + 1;

	//	printf("value of pAddress %p\n",pAddress);
	//	printf("value of pAddress  %p is %x",pAddress, *pAddress);


		int *pAddress = (int*)&g_data;

				printf("value of pAddress %p\n",pAddress);
				printf("value of pAddress  %p is %x\n",pAddress, *pAddress);

				pAddress = pAddress + 1;

				printf("value of pAddress %p\n",pAddress);
				printf("value of pAddress  %p is %x",pAddress, *pAddress);

}


