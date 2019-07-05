#include<stdio.h>

int x = 0;

int f ();

int main (void)
{
	int a = 1;

	x = a;
	a = f();
	{
		int b = 2;
		b = a + b;
		x = x + b;
	}
	
	printf("%d %d\n", a, x);

	while(1) getchar();

	return 0;
}

int f ()
{
	int x = 4;

	return x;
}