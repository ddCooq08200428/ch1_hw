/****************************************

���:2022 / 10 / 2 �gcode
���g�H:�q�l�@�A 111360229 �����E
�D�D:�p��}���@�Ѫ�O�h��
*****************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int AllDis, mon, PerDis, ParkMon, PassMon;

	printf("�п�J�@��Ѫ��`���{��(km) :");
	scanf_s("%d",&AllDis);
	printf("�п�J�T�o�@����/�[�ڦh�ֿ�(NT) :");
	scanf_s("%d",&mon);
	printf("�п�J�@����/�[�گ��p�h�֤��� :");
	scanf_s("%d", &PerDis);
	printf("�п�J�@��Ѫ������O(NT) :");
	scanf_s("%d", &ParkMon);
	printf("�п�J�@��Ѫ��q��O(NT) :");
	scanf_s("%d", &PassMon);
	printf("�A�@�Ѷ}���`�@�ݭn�� :%d", (AllDis / PerDis) * mon + ParkMon + PassMon);

	system("pause");
	return 0;
}