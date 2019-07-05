#include<stdio.h>

int sum1(int n);
int summ(int m, int n);

int main(int argc, char const *argv[])
{
	int n = 0, m = 0;

	printf("Please enter a number as n:");
	scanf("%d", &n);

	printf("The sum of 1 to %d is %d.\n", n, sum1(n));
	
	printf("Please enter another number as m (m<n):");
	scanf("%d", &m);
	
	printf("The sum of %d to %d is %d.\n", m, n, summ(m,n));

	while(1) getchar();

	return 0;
}

int sum1(int n)
{
	int result = 0, i = 0;

	for (i = 1; i <= n; i++)
	{
		result = result + i;
	}

	return result;
}

int summ(int m, int n)
{
	int result = 0, i = 0;

	for (i = m; i <= n; i++)
	{
		result = result + i;
	}

	return result;
}