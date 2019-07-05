#include<stdio.h>

int main (void)
{
	int mark, max;

	printf ("Enter marks:");
	scanf("%d", &mark);
	max = mark;
	while(mark >= 0)
	{
		if (max < mark)
			max = mark;
		scanf("%d", &mark);
	};
	printf("Max=%d\n", max);

	while(1) getchar();

	return 0;
}