/****************************************

日期:2022 / 10 / 2 寫code
撰寫人:電子一乙 111360229 陳銘鴻
主題:顯示0到10的1次方、2次方、3次方
*****************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
	printf("number\tsquare\tcube\n");
	for (int i = 0; i < 11; i++)
	{
		//printf("\n");
		printf("%d\t%d\t%d\n", num[i], num[i]* num[i], num[i]* num[i]* num[i]);
	}

	return 0;
}