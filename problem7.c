#include <stdio.h>

/*
	Input month : 1
	Input day : 10

	1/1 ~ 1/10 : 10老

	Input month : 4
	Input day : 10

	1/1 ~ 4/10 : 100老

	Input month : 12
	Input day : 30

	1/1 ~ 12/30 : 364老
*/

void main(void)
{
	int days[13] = {0, 31,28,31,30,31,30,31,31,30,31,30,31 };
	int month,date ;

	printf("Input month : ");
	scanf("%d", &month);
	printf("Input day : ");
	scanf("%d", &date);

	int total = 0;
	for (int i = 1; i < month; i++)
	{
		total = total + days[i];
	}
	total += date;

	printf("1/1 ~ %d/%d : %d老\n", month, date, total);
}