#include<stdio.h>

double cylinder (double r, double h);	//函数声明

int main (void)
{
	double height, radius, volume;

	printf("Enter radius and height:");
	scanf("%lf%lf", &radius, &height);
	volume = cylinder(radius, height);
	printf("Volume=%.3f\n", volume);

	while(1) getchar();

	return 0;
}

//定义函数
double cylinder (double r, double h)
{
	double result;

	result = 3.141592653*r*r*h;

	return result;
}