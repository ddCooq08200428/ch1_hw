/****************************************

日期:2022 / 10 / 2 寫code
撰寫人:電子一乙 111360229 陳銘鴻
主題:A是否為B的倍數
*****************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[2], i;
	for (i = 1; i <= 2; i++)
	{
		printf("請輸入第%d個整數 :", i);
		scanf("%d", &a[i-1]);
	}
	
	if (a[0] % a[1] == 0)
	{
		printf("%d是%d的倍數", a[0], a[1]);
	}
	else
	{
		printf("%d不是%d的倍數", a[0], a[1]);
	}
	

	system("pause");
	return 0;
}