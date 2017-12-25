/*练习2-6
计算物体自由下落的距离：一个物体从100米的高空自由落下，求
它在前3秒内下落的垂直距离。设重力加速度为10m/s^2。*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int g = 10, t = 3;	//g代表重力加速度，t代表下落时间
	double l;			//l代表下落距离

	l = 0.5*g*t*t;
	printf("%f\n", l);
	
	return 0;
}
