#include <stdio.h>

void main(void)
{
	int ar[3][4];

	printf("sizeof(ar) : %d byte(s)\n", sizeof(ar));
	printf("sizeof(ar[0]) : %d byte(s)\n", sizeof(ar[0]));
	printf("sizeof(ar[0][0]) : %d byte(s)\n", sizeof(ar[0][0]));

	printf("%x\n", ar); // 0x30
	printf("%x\n", ar[0]); // 0x30
	printf("%x\n", &ar[0][0]); //0x30

	printf("%x\n", ar[1]); // 0x40
	printf("%x\n", &ar[0][1]); // 0x34
}