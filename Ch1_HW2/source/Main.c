/****************************************

日期:2022 / 10 / 2 寫code
撰寫人:電子一乙 111360229 陳銘鴻
主題:找出奇數或偶數
*****************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("請輸入一個整數 :");
	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}

	system("pause");
	return 0;
}