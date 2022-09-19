#include <stdio.h>

/*
	2	4	6	8	10	12	14	16	18
	3	6	9	12	15	18	21	24	27
	4
	5
	6
	7
	8
	9	18	27	36	45	54	63	72	81

	검색할 정수 입력 : 12
	gu[0][5] = 12
	gu[1][3] = 12
	gu[2][2] = 12
	gu[4][1] = 12

	검색할 정수 입력 : 13
	13은 없습니다.

 */

void main(void)
{
	int gu[8][9];
	int num;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			gu[i][j] = (i + 2) * (j + 1);
			printf("%d\t", gu[i][j]);
		}
		printf("\n");

	}

	printf("검색할 정수 입력 : ");
	scanf("%d", &num);

	int k=0;
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (gu[i][j] == num)
			{
				printf("gu[%d][%d] = %d\n", i, j, num);
				k = 1;
			}
		}
	}
	if (k==0)
	{
		printf("%d은 없습니다.\n",num);
	}
}