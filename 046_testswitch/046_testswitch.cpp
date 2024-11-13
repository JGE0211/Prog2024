#include <stdio.h>

int main()
{
	int n;
	printf("점수를 입력하시오:");
	scanf_s("%d", &n);

	switch (n / 10) {  // 정수 / 정수 = 정수!!!!
	case 10:  //break가 없으므로 case 9에 있는 것 실행
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
}