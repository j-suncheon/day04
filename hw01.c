#include <stdio.h>
void main(void)
{
	int number = 135;

	for (int i = 1; i <= number; i++)
	{
		printf("%d : ", i);
		
		int num = i, cnt = 0;
		while (num != 0)
		{
//			printf("%d", num % 10);
			switch (num % 10)
			{
			case 3: case 6: case 9: cnt++;
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