/****************************************

日期:2022 / 10 / 2 寫code
撰寫人:電子一乙 111360229 陳銘鴻
主題:計算BMI並判斷為過輕、一般、過胖、肥胖
*****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double wei, hei, BMI;

	printf("請輸入您的身高(cm)與體重(kg):");
	scanf_s("%lf%lf", &hei, &wei);
	BMI = wei / pow(hei/100, 2);
	printf("%lf\n", BMI);
	if (BMI < 18.5)
	{
		printf("Underweight\n");
	}
	else if(18.5 < BMI && BMI < 24.9)
	{
		printf("Normal\n");
	}
	else if(25 < BMI && BMI < 29.9)
	{
		printf("Overweight\n");
	}
	else
	{
		printf("Obese\n");
	}

	system("pause");
	return 0;
}