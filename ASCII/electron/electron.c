#include <stdio.h>
int main(void)
{
	double charge, chargeE;
	double electrons;
	printf("Enter the charge:");
	fflush(stdout);
	scanf("%lf",&charge);

	printf("enter the charge of an electron:");
	fflush(stdout);
	scanf("%le",&chargeE);


	electrons = (charge / chargeE) * -1 ;

	printf("Total number of electrons = %le\n",electrons);
	fflush(stdout);
	printf("Total number of electrons = %lf\n",electrons);
	fflush(stdout);

	printf("\nPress enter key to exit the application\n");
	fflush(stdout);
	printf("Press Enter \n");
			while(getchar()!= '\n')
			{

			}
			getchar();

	return 0;


}
