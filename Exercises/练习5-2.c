#include<stdio.h>

int max (int a, int b);

int main(int argc, char const *argv[])
{
	int a = 0, b = 0;

	printf("Please enter a number as a:");
	scanf("%d", &a);
	printf("Please enter another number as b:");
	scanf("%d", &b);

	printf("The max nubmer is %d.\n", max(a, b));

	while(1) getchar();

	return 0;
}

int max (int a, int b)
{
	int max = 0;

	if (a > b)
		max = a;
	else
		max = b;

	return max;
}