#include<stdio.h>

float cash = 0;

void income (float number), expend (float number);

int main (void)
{
	int choice = 0;
	float value = 0;

	cash = 0;
	printf("Enter operate choice (1--income, 2--expend, 0--end):");
	scanf("%d", &choice);
	while (choice != 0)
	{
		if (choice == 1 || choice == 2)
		{
			printf("Enter cash value:");
			scanf("%f", &value);

			if (choice == 1)
				income (value);
			else
				expend (value);
			printf("current cash:%.2f\n", cash);
		}

		printf("Enter operate choice (1--income, 2--expend, 0--end):");
		scanf("%d", &choice);
	}
	printf("End.\n");

	while(1) getchar();

	return 0;
}

void income (float number)
{
	cash = cash + number;
}

void expend (float number)
{
	cash = cash - number;
}