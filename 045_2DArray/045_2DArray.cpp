#include <stdio.h>

int main()
{
	int a[3][4] = { { 1,2,3,4 }, {5,6,7,8} , {9,10,11,12} };


	printf("%d\n", &a[0]);
	printf("%d\n", a);

	printf("%d\n", &a[1]); // 4*4 = 16 &a[0]에서 16바이트 커짐
	printf("%d\n", a + 1);
	printf("%d\n", &a[0] + 1);

	int (*p)[4] = &a[0]; // {1,2,3,4}를 통째로 저장하는////// 정수 4개짜리 배열의 주소!!!
	// (*변수)[숫자] <- 변수에 숫자개 짜리 배열의 주소를 저장함

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++)
			printf("%4d ", (*(p+j))[i]);
		printf("\n");
	}
}