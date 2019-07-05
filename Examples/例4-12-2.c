#include<stdio.h>

int main (void)
{
	int child, women, men;

	for (men = 0; men <= 15; men++)
		for(women = 0; women <=22; women++)
		{
			child = 45 - women - men;
			if (men*3 + women*2 + child*0.5 == 45)
				printf("men=%d, women=%d, child=%d\n", men, women, child);
		};

	while(1) getchar();

	return 0;
}