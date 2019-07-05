#include<stdio.h>
#include<math.h>

int prime (int m);

int main (void)
{
	int count = 0, i = 0;

	count = 0;
	for ( i = 2; i <= 100 ; i++)
	{
		if (prime(i) == 1)
		{
			printf("%6d", i);
			count++;
			if (count%10 == 0)	printf("\n");
		}
	}
	printf("\n");

	while(1) getchar();

	return 0;
}

int prime (int m)
{
	int i = 0, n = 0, result = 1;

	if (m == 1)	result = 0;
	
	n = sqrt(m);
	for (i = 2; i <= n; i++)
	{
		if (m%i == 0)
		{
			result = 0;
			break;
		}
	}

	return result;
}