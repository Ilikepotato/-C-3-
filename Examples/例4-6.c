#include<stdio.h>

double fact (int n);

int main (void)
{
	int i;
	double sum = 0;

	for (i = 1; i <= 100; i++)
		sum = sum + fact(i);
	printf ("1!+2!+...+100!=%e\n", sum);

	while(1) getchar();
	
	return 0;
}

double fact (int n)
{
	int i;
	double result = 1;

	for (i = 1; i <= n; i++)
		result = result * i;

	return result;
}