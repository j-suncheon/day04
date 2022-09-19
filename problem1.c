#include <stdio.h>

/*
	5개의 정수를 입력받아 다음과 같이 출력하는 코드 작성

	num1 :
	num2 :
	num3 :
	num4 :
	num5 :
*/

void main(void)
{
	int arr[5];



	for (int i = 0; i < 5; i++)
	{
		printf("num%d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("\n< PRINT >\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", arr[4-i]);
	}
}