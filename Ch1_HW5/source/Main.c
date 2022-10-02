/****************************************

日期:2022 / 10 / 2 寫code
撰寫人:電子一乙 111360229 陳銘鴻
主題:顯示星號三角形
*****************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int  i, j;

	printf("Display the ollowing pyramid pattern with five printf statement\n");
	printf("     *      \n");
	printf("    ***     \n");
	printf("   *****    \n");
	printf("  *******   \n");
	printf(" *********  \n");

	printf("Display the ollowing pyramid pattern with a single printf statement\n");
	for (i = 1 ; i <= 5; i++ )
	{
		for (j = 0; j <= 5 - i; j++)
		{
			printf(" "); 
		}
		for (j = 1; j <= i * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}