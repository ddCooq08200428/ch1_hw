/****************************************

���:2022 / 10 / 2 �gcode
���g�H:�q�l�@�A 111360229 �����E
�D�D:���0��10��1����B2����B3����
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