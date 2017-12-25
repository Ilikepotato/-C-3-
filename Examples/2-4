/*例2-4
为鼓励居民节约用水，自来水公司采取用水量按月分段计费的
办法，居民应交水费y(元)与月用水量x(吨)的函数关系式如下
(设x≥0)。输入用户的月用水量x(吨)，计算并输出该用户应支
付的水费y(元)(保留两位小数)。

当x≤15时，y=f(x)=4*x/3；
当x>15时，y=f(x)=2.5*x-10.5.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	double x = 0, y = 0;			//定义两个双精度浮点型变量

	printf("Enter x (x>=0):\n");	//输入提示
	/*调用scanf()函数输入数据，变量名x前加&，%lf中的l是long的首字母*/
	scanf("%lf", &x);
	if (x <= 15)					//if-else语句
	{
		y = 4*x /3;
	}
	else
	{
		y = 2.5*x - 10.5;
	}
	/*调用printf()函数输出结果*/
	printf("y = f(%f) = %.2f\n", x, y);	//%.2f是为了保留两位小数点
	
	return 0;
}
