/*练习2-4
温度转换：求华氏温度150℉对应的摄氏温度。
计算公式如下：
			c = (5*(f - 32)) / 9*/

/*将华氏温度转换为摄氏温度*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int fahr = 0, celsius = 0;

	fahr = 150;
	celsius = (5*(fahr - 32)) / 9;
	printf("fahr=%d℉, celsius=%d℃\n", fahr, celsius);

	return 0;
}
