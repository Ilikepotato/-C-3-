#include<stdio.h>

int main (void)
{
	int i;
	double item, sum;

	sum = 0;
	item = 1;
	for (i = 1; i <= 100; i++)
	{
		item = item * i;
		sum = sum + item;
	}
	printf ("1!+2!+...+100!=%e\n", sum);

	while (1)	getchar();
 
	return 0;
}