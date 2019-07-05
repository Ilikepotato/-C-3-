#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 0, b = 0;

	printf("Input a, b:");
	scanf("%o%d", &a, &b);
	printf("%d%5d\n", a, b);
	printf("Input a, b again:");
	scanf("%x%d", &a, &b);
	printf("%d%5d\n", a, b);

	while(1) getchar();

	return 0;
}