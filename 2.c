/*

	  2. ������ �Է¹޾� ����� ����ϴ� �ڵ带 �ۼ�

		2 - 100 ���� �Է� : 42

		< 42 ����� ���� : 8�� >
		1	2	3	6	7	14	21	42

*/

#include <stdio.h>

void main(void)
{
	int num;
	int q=0;

	printf("2 - 100 ���� �Է� : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (num%i==0)
		{
			q++;
		}
	}
	printf("\n< %d ����� ���� : %d�� >\n", num, q);

	for (int i = 1; i <= num; i++)
	{
		if (num%i==0)
		{
			printf("%d\t",i);
		}
	}
}