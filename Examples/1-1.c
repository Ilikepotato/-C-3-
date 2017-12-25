/*例1-1 求阶乘问题。
输入一个正整数n，输出n！*/

#include <stdio.h>						//编译预处理命令

int factorial(int n);					//函数声明

int main(int argc, char const *argv[])	//主函数
{
	int n;								//变量定义

	//scanf("%d", &n);					//输入一个整数
	n = 5;
	printf("%d\n", factorial(n));		//调用函数计算阶乘

	return 0;
}

int factorial(int n)					//定义计算n！的函数
{
	int fact = 1;

	for (int i = 1; i <= n; ++i)
	{
		fact = fact*i;
	}

	return fact;
}
