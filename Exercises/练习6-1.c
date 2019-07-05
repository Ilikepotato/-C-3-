#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n = 0;

	printf("Please enter a number.\n");
	scanf("%d", &n);
	printf("%o, %x\n", n, n);

	while(1) getchar();

	return 0;
}