#include <stdio.h>
#include <stdint.h>

int main(void)

{
	int a, b;
	printf("enter the numbers a and b");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	while (a <= b)
	printf("%d\n",a += 2);
	fflush(stdout);
}
