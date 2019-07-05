#include<stdio.h>

int main (void)
{
	int x;

	printf("Enter x:");
	scanf("%d", &x);
	while(x != 0)
	{
		printf("%d", x%10);
		x = x/10;
	}

	while(1) getchar();

	return 0;
}