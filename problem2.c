#include <stdio.h>

/*+
	10���� ������ �Է¹޾� ������ ���� ����ϴ� �ڵ� �ۼ�

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

	<¦��>
	~~~

	<Ȧ��>
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
	printf("\n< ¦�� >\n");
	for (int i = 0; i < 10; i++)
	{
		if (nums[i] % 2 == 0)
		{
			printf("%d\t", nums[i]);
		}
	}
	printf("\n< Ȧ�� >\n");
	for (int i = 0; i < 10; i++)
	{
		if (nums[i] % 2 == 1)
		{
			printf("%d\t", nums[i]);
		}
	}
}