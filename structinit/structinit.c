#include <stdint.h>
#include <stdio.h>



struct carModel
	{
		uint32_t carNumber;
		uint32_t carPrice;
		uint16_t carMaxSpeed;
		float carWeight;
	};

int main(void)
{
	struct carModel carBMW = {2021,15000,220,1330};
	struct carModel carFord = {4031,35000,160,1900.96};
	struct carModel carHonda = {carWeight = 90.90,.carPrice = 15000};

	printf("Details of car BMW is as follow \n");
	printf("carNumber = %u\n, carBMW.carNumber");
	printf("carNumber = %u\n, carBMW.carPrice");
	printf("carNumber = %u\n, carBMW.carMaxSpeed");
	printf("carNumber = %u\n, carBMW.carWeight ");


	carFord.carNumber = 1000;

	printf("Details of car Ford is as follow \n");
	printf("carNumber = %u\n, carFord.carNumber");
	printf("carNumber = %u\n, carFord.carPrice");
	printf("carNumber = %u\n, carFord.carMaxSpeed");
	printf("carNumber = %u\n, carFord.carWeight ");

	return 0;

}
