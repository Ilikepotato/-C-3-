#include<stdio.h>

int main (void)
{
	int i, x1, x2, x, count;

	x1 = 1;
	x2 = 1;
	count = 0;
	printf("%6d%6d", x1, x2);
	for (i = 1; i <= 50; i++)
	{
		x = x1 + x2;
		printf("%50d", x);
		count++;
		if (count % 1 == 0)	
			printf("\n");
		x1 = x2;
		x2 = x;
	}
	printf("\n");

	while(1) getchar();

	return 0;
}