#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch = 0;

	printf("Input characters:");
	ch = getchar();
	while(ch != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch - 'A' + 'a';
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 'a' + 'A';
		}
		putchar(ch);
		ch = getchar();
	}

	while(1) getchar();

	return 0;
}