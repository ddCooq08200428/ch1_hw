/****************************************

���:2022 / 10 / 2 �gcode
���g�H:�q�l�@�A 111360229 �����E
�D�D:�q3�Ӥ��P����Ƥ���X�̤j�B�̤p��

*****************************************/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{ 
    void comp(int a[]); //�ŧi�禡
    int a[3];
    printf("please input three different integers:"); //��J
    for (int i = 0; i < 3; i++)
    {
        scanf_s("%d", &a[i]);
    }
    comp(a); //�I�s�禡
    printf("The largest integer is %d\n", a[2]);
    printf("The smallest integer is %d\n", a[0]);
    system("pause");
    return 0;
}


void comp(int a[]) //�w�q�禡
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