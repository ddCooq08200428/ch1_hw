/****************************************

���:2022 / 10 / 2 �gcode
���g�H:�q�l�@�A 111360229 �����E
�D�D:A�O�_��B������
*****************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[2], i;
	for (i = 1; i <= 2; i++)
	{
		printf("�п�J��%d�Ӿ�� :", i);
		scanf("%d", &a[i-1]);
	}
	
	if (a[0] % a[1] == 0)
	{
		printf("%d�O%d������", a[0], a[1]);
	}
	else
	{
		printf("%d���O%d������", a[0], a[1]);
	}
	

	system("pause");
	return 0;
}