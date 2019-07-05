#include<stdio.h>

int main (void)
{
	int i, mark, max, n;

	printf("Enter n:");
	scanf("%d", &n);
	printf("Enter %d marks:", n);
	scanf("%d", &mark);
	max = mark;
	for (i = 1; i < n; i++)
	{
		scanf("%d", &mark);
		if (max < mark)
			max = mark;
	}
	printf("Max=%d\n", max);

	while(1) getchar();

	return 0;
}
