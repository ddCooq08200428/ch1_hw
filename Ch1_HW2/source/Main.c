/****************************************

���:2022 / 10 / 2 �gcode
���g�H:�q�l�@�A 111360229 �����E
�D�D:��X�_�Ʃΰ���
*****************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("�п�J�@�Ӿ�� :");
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