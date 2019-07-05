#include<stdio.h>

int main (void)
{
	int count, num;
	double grade, total;

	num = 0;
	total = 0;
	count = 0;
	printf("Enter grades:");
	scanf("%lf", &grade);

	while (grade >= 0)
	{
		total = total + grade;
		num++;
		if (grade < 60)
			count++;
		scanf("%lf", &grade);
	}
	if (num != 0)
	{
		printf ("Grade average is %.2f\n", total / num);
		printf("Number of failures is %d\n", count);
	}
	else
		printf("Grade average is 0\n");

	while(1)
		getchar();

	return 0;
}