#include <stdio.h>

/*
   ���ۿ� : 1
   ������ : 1
   ����� : 4
   ������ : 10
*/

void main(void)
{
	//������ Ǯ��
	int days[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
	int s_md[3], e_md[3]; // ������ �迭�� ���ļ��� �� �� ����

	for (int i = 0; i < 2; i++)
	{
		printf("����%s : ", i == 0 ? "��" : "��");
		scanf("%d", &s_md[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		printf("����%s : ", i == 0 ? "��" : "��");
		scanf("%d", &e_md[i]);
	}

	s_md[2] = 0;
	for (int i = 1; i < s_md[0]; i++)
	{
		s_md[2] += days[i];
	}
	s_md[2] += s_md[1];
	
	e_md[2] = 0;
	for (int i = 1; i < e_md[0]; i++)
	{
		e_md[2] += days[i];
	}
	e_md[2] += e_md[1];

	printf("%d/%d ~ %d/%d : %d��\n", s_md[0], s_md[1], e_md[0], e_md[1], e_md[2] - s_md[2]+1);
	
	/*
	int days[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
	int month1,month2,date1, date2;

	printf("Input st_month : ");
	scanf("%d", &month1);
	printf("Input st_day : ");
	scanf("%d", &date1);

	printf("Input fi_month : ");
	scanf("%d", &month2);
	printf("Input fi_day : ");
	scanf("%d", &date2);

	int total1 = 0;
	for (int i = 1; i < month2; i++)
	{
		total1 = total1 + days[i];
	}
	total1 += date2;

	int total2 = 0;
	for (int i = 1; i < month1; i++)
	{
		total2 = total2 + days[i];
	}
	total2 += date1;

	int total = total1 - total2 +1 ;

	printf("%d/%d ~ %d/%d : %d��\n", month1,date1,month2,date2, total);
	*/

}