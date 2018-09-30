#include <stdio.h>


int main(void)
{
	long double molecule = 3.0e-23;
	int quart = 950;
	int amount;
	printf("How many water? : ");
	scanf_s("%f", &amount);
	printf("This is %lf molecule\n", amount / molecule);
	printf("This is %f quart", amount / quart);
	getchar();
	return 0;

}