/*例2-5
计算银行存款的本息。
输入存款金额money、存期year和年利率rate，根据
下列公式计算存款到期时的本息合计sum(税前)，输
出时保留两位小数。
		sum = money(1 + rate)^year
*/

#include <stdio.h>
#include <math.h>	//程序中调用了数学函数，需要包含头文件math.h

int main(int argc, char const *argv[])
{
	int money, year;			//定义两个整型变量
	double rate, sum;			//定义两个双精度浮点型变量

	printf("Enter money:");		//提示输入money
	scanf("%d", &money);		//调用scanf()函数输入money
	printf("Enter year:");		//提示输入year
	scanf("%d",&year);			//调用scanf()函数输入year
	printf("Enter rate:");		//提示输入rate
	scanf("%lf", &rate);		//调用scanf()函数输入rate,%lf中的l是字母
	sum = money*pow(1+rate, year);
	printf("sum=%.2f\n", sum);

	return 0;
}
