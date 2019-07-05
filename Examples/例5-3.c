#include<stdio.h>
#include<math.h>

double funpi(double e);

int main (void)
{
	double e, pi;

	printf("Enter e:");
	scanf("%lf", &e);
	pi = funpi(e);
	printf("pi=%f\n", pi);

	while(1) getchar();

	return 0;
}

double funpi(double e)
{
	int denominator, flag;
	double item, sum;

	flag = 1;
	denominator = 1;
	item = 1.0;
	sum = 0;

	while (fabs(item) >= (e/4.0))
	{
		item = flag*1.0/denominator;
		sum = sum + item;
		flag = -flag;
		denominator = denominator + 2;
	}

	return sum*4;
}