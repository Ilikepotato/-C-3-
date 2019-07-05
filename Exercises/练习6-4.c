#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 0, b = 0, c = 0;

	printf("	a	b	c 	a&&(b||c) 	a&&b||a&&c 		  a||(b&&c)	 (a||b)&&(a||c)\n");
	for ( a = 0; a < 2; a++)
	{
		for ( b = 0; b < 2; b++)
		{
			for ( c = 0; c < 2; c++)
			{
				printf("	%d	%d	%d		%d		%d			%d		%d\n", 
					a, b, c, a&&(b||c), a&&b||a&&c, a||(b&&c), (a||b)&&(a||c));
			}
		}
	}
	printf("\n");

	printf("	a	b	  !(a&&b) 	  !a||!b 	 !(a||b)	 !a&&!b\n");
	for ( a = 0; a < 2; a++)
	{
		for ( b = 0; b < 2; b++)
		{
			printf("	%d	%d		%d		%d		%d		%d\n", a, b, !(a&&b), !a||!b, !(a||b), !a&&!b);
		}
	}

	while(1) getchar();

	return 0;
}
