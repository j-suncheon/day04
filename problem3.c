#include <stdio.h>

/*
	짝수를 5개 입력하여 다음과 같이 출력하는 코드를 작성

	num1 : 10
	num2 : 4
	num3 : 11
	num3 : 20
	num4 : 8
	num5 : 1
	num5 : 11
	num5 : 21
	num5 : 16

	<PRINT>
	10	4	20	8	16
*/

void main(void)
{
	int num[5];

	for (int i = 0; i < 5; i++)
	{
		printf("num%d : ", i + 1);
		scanf("%d", &num[i]);
		if (num[i] %2== 1)
		{
			i -= 1;
		}
	}
	printf("<PRINT>\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", num[i]);
	}
}