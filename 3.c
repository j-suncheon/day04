/*

	3. 다음의 결과를 보이는 프로그램 작성

		짝수 몇개 입력 : 4

		num1 : 10
		num2 : 6
		num3 : 11
		num4 : 9
		num5 : 13
		num6 : 2
		num7 : 10
		num8 : 2
		num8 : 22
		num8 : 31
		num9 : 14
		num10 : 24

		< 10개의 정수 출력	짝수 : 4개, 홀수 : 6개 >
		10	6	2	10	25	15	31	13	9	11
*/

#include <stdio.h>
#define SIZE 10
#define PRN(X) printf("정수 : %d\n",X)

void main(void)
{
	int nums[SIZE], even, data;
	int even_idx = 0, odd_idx = SIZE-1;

	printf("짝수 몇개 입력 : ");
	scanf("%d", &even);

	for (int i = 0; i < SIZE; i++)
	{
		printf("num %d : ", i + 1);
		scanf("%d", &data);

		if (data %2==0 && even_idx < even)
		{
			nums[even_idx++] = data;
		}
		else if(data %2==1 && even_idx >= even)
		{
			nums[odd_idx--] = data;
		}
		else
		{
			i--;
		}
	}
	printf("\n< PRINT 짝수 : %d개 홀수 : %d개 >\n", even, SIZE-1);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%5d", nums[i]);
	}
	printf("\n");
}