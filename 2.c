/*

	  2. 정수를 입력받아 약수를 출력하는 코드를 작성

		2 - 100 정수 입력 : 42

		< 42 약수의 개수 : 8개 >
		1	2	3	6	7	14	21	42

*/

#include <stdio.h>

void main(void)
{
	int num;
	int q=0;

	printf("2 - 100 정수 입력 : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (num%i==0)
		{
			q++;
		}
	}
	printf("\n< %d 약수의 개수 : %d개 >\n", num, q);

	for (int i = 1; i <= num; i++)
	{
		if (num%i==0)
		{
			printf("%d\t",i);
		}
	}
}