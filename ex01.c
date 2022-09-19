#include <stdio.h>

// 배열 - 연속적인 공간에 같은 타입의 변수를 고정된 갯수만큼 묶어놓은 집합
//배열의 필요성 - 변수선언의 노가다를 줄여주는 역할

//배열을 초기화하지않고 변수를 출력하면 쓰레기값이 출력됨
void main(void)
{
	 // 정수를 5개 모아놓은 배열 nums 생성
	int nums[5] = {10,20,30,40,50};

	//주소
	printf("sizeof(nums) : %d\n" ,sizeof(nums));
	printf("nums 주소 : %x\n", nums); // 0x70
	printf("첫번째 변수의 주소 : %x\n", &nums[0]); //0x70
	printf("두번째 변수의 주소 : %x\n", &nums[1]); //0x74
	printf("두번째 변수의 주소 : %x\n", nums +1); //0x74

	for (int i = 0; i <5 ; i++)
	{
		printf("%d\t", nums[i]);
	}

}