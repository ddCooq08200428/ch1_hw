/****************************************

���:2022 / 10 / 2 �gcode
���g�H:�q�l�@�A 111360229 �����E
�D�D:�p��BMI�çP�_���L���B�@��B�L�D�B�έD
*****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double wei, hei, BMI;

	printf("�п�J�z������(cm)�P�魫(kg):");
	scanf_s("%lf%lf", &hei, &wei);
	BMI = wei / pow(hei/100, 2);
	printf("%lf\n", BMI);
	if (BMI < 18.5)
	{
		printf("Underweight\n");
	}
	else if(18.5 < BMI && BMI < 24.9)
	{
		printf("Normal\n");
	}
	else if(25 < BMI && BMI < 29.9)
	{
		printf("Overweight\n");
	}
	else
	{
		printf("Obese\n");
	}

	system("pause");
	return 0;
}