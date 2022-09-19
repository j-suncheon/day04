#include <stdio.h>

/*+
	10개의 정수를 입력받아 다음과 같이 출력하는 코드 작성

	num1 :
	num2 :
	num3 :
	num4 :
	num5 :
	num6 :
	num7 :
	num8 :
	num9 :
	num10 :

	<짝수>
	~~~

	<홀수>
	~~~~
*/

void main(void)
{
	int nums[10];

	for ( int i = 0; i < 10; i++)
	{
		printf("num%d : ", i + 1);
		scanf("%d", &nums[i]);
	}
	printf("\n< 짝수 >\n");
	for (int i = 0; i < 10; i++)
	{
		if (nums[i] % 2 == 0)
		{
			printf("%d\t", nums[i]);
		}
	}
	printf("\n< 홀수 >\n");
	for (int i = 0; i < 10; i++)
	{
		if (nums[i] % 2 == 1)
		{
			printf("%d\t", nums[i]);
		}
	}
}