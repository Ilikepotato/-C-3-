#include<stdio.h>

void pyramid (int n);

int main (void)
{
	int n = 0;

	printf("Please enter a number as the row:");
	scanf("%d", &n);
	pyramid(n);

	while(1) getchar();

	return 0;
}

void pyramid (int n)
{
	int i = 0, j = 0;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}

		if (n <= 9)
		{
			for (j = 1; j <= i; j++)
			{
				printf(" %d", i);
			}
		}
		else
		{
			for (j = 1; j <= i; j++)
			{
				if ( j > 1 && i <= 9)	putchar(' ');
				printf(" %d", i);
			}
		}

		putchar('\n');
	}
}