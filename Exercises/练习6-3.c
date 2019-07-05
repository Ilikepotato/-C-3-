#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0;
	char ch_lower = 0, ch_upper = 0;

	printf("Please enter a lowercase letter:");
	scanf("%c", &ch_lower);
	if (ch_lower >= 'a' && ch_lower <= 'z')
	{
		ch_upper = ch_lower - 'a' + 'A';
		printf("%c->%c\n", ch_lower, ch_upper);
	}
	else
	{
		printf("Invaild char!\n");
	}

	while(1) getchar();

	return 0;
}