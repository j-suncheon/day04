/*
	1. 369°ÔÀÓÀ» ÀÛ¼ºÇØº¸ÀÚ
	  20 ~ 99 : 34

	  1 : 1
	  2 : 2
	  3 : Â¦
	  4 : 4
	  5 : 5
	  6 : Â¦
	  7 : 7
	  8 : 8
	  9 : Â¦
	  10 : »Ç¼õ
	  11 : 11
	  ...
	  20 : »Ç»Ç¼õ
	  ...
	  29 : Â¦
	  30 : »Ç»Ç»Ç¼õ Â¦
	  31 : Â¦
	  32 : Â¦
	  33 : Â¦Â¦
	  34 : Â¦


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
				printf("»Ç");
			}
			printf("œ¼");
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
			printf("Â¦");
		}
		printf("\n");
	}
}