/****************************************

���:2022 / 10 / 2 �gcode
���g�H:�q�l�@�A 111360229 �����E
�D�D:��ܬP���T����
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