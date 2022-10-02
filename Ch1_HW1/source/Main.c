/****************************************

日期:2022 / 10 / 2 寫code
撰寫人:電子一乙 111360229 陳銘鴻
主題:從3個不同的整數中找出最大、最小值

*****************************************/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{ 
    void comp(int a[]); //宣告函式
    int a[3];
    printf("please input three different integers:"); //輸入
    for (int i = 0; i < 3; i++)
    {
        scanf_s("%d", &a[i]);
    }
    comp(a); //呼叫函式
    printf("The largest integer is %d\n", a[2]);
    printf("The smallest integer is %d\n", a[0]);
    system("pause");
    return 0;
}


void comp(int a[]) //定義函式
{
    int i, j, temp;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
            }
        }
    }
}