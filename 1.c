/*
	1. 369������ �ۼ��غ���
	  20 ~ 99 : 34

	  1 : 1
	  2 : 2
	  3 : ¦
	  4 : 4
	  5 : 5
	  6 : ¦
	  7 : 7
	  8 : 8
	  9 : ¦
	  10 : �Ǽ�
	  11 : 11
	  ...
	  20 : �ǻǼ�
	  ...
	  29 : ¦
	  30 : �ǻǻǼ� ¦
	  31 : ¦
	  32 : ¦
	  33 : ¦¦
	  34 : ¦


*/

#include <stdio.h>
void main(void)
{
	int number = 135;

	for (int i = 1 ; i <= number; i++)
	{
		printf("%d : ", i);
		int num = i;
		int cnt = 0;
		if (num % 10 ==0)
		{
			for (int j = 0; j < num/10; j++)
			{
				printf("��");
			}
			printf("��");
		}
		while (num != 0)
		{
			//			printf("%d", num % 10);
			switch (num % 10)
			{
			case 3: case 6: case 9:
				cnt++;
			}
			num /= 10;
		}
		while (cnt-- > 0)
		{
			printf("¦");
		}
		printf("\n");
	}
}