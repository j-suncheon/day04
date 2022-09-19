#include <stdio.h>

/*
	num1 : 12
	num2 : 54
	num3 : 23
	num4 : 7
	num5 : 11
	num6 : 56
	num7 : 90
	num8 : 9
	num9 : 12
	num10 : 2

	< PRINT >
	12	54	56	90	12	2	9	11	7	23
*/

void main(void)
{
	int nums[10];
	int k[10];
	int a = 0;
	int b = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("num%d : ", i + 1);
			scanf("%d", &k[i]);
		if (k[i]%2==0)
		{
			nums[a] = k[i];
			a++;
		}
		else
		{
			nums[9 - b] = k[i];
			b++;
		}
	}

	printf("< PRINT >\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", nums[i]);
	}
}