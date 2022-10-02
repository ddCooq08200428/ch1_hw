/****************************************

日期:2022 / 10 / 2 寫code
撰寫人:電子一乙 111360229 陳銘鴻
主題:計算開車一天花費多少
*****************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int AllDis, mon, PerDis, ParkMon, PassMon;

	printf("請輸入一整天的總里程數(km) :");
	scanf_s("%d",&AllDis);
	printf("請輸入汽油一公升/加侖多少錢(NT) :");
	scanf_s("%d",&mon);
	printf("請輸入一公升/加侖能行駛多少公里 :");
	scanf_s("%d", &PerDis);
	printf("請輸入一整天的停車費(NT) :");
	scanf_s("%d", &ParkMon);
	printf("請輸入一整天的通行費(NT) :");
	scanf_s("%d", &PassMon);
	printf("你一天開車總共需要花 :%d", (AllDis / PerDis) * mon + ParkMon + PassMon);

	system("pause");
	return 0;
}