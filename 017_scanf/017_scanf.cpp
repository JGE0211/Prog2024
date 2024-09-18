#include <stdio.h>

int main()
{
	int a, b;

	printf("두 개의 정수를 입력하세요:"); // 줄 바꿈을 하지 않아야지 바로 옆에 입력한 값이 출력됨
	scanf_s("%d %d", &a, &b);  // 입력하고 저장하시오
	printf("두 개의 정수: %d %d\n", a, b);
	getchar();  // 글자 하나를 읽어내는 함수

	char c;

	printf("한 개의 문자를 입력하세요:");
	scanf_s("%c", &c);
	printf("문자:" "%c\n", c);

	float f;

	printf("한 개의 실수를 입력하세요:");
	scanf_s("%f", &f);
	printf("실수:" "%f\n", f);

	double d;

	printf("한 개의 배정도 실수를 입력하세요:");
	scanf_s("%lf", &d);  ///  lf (long float) : double일 때는 엘 에프 !!! 입력받을 때는 꼭 lf 해야 됨!!!!
	printf("실수:" "%f\n", d); // 여기서는 굳이 엘에프 안 해도 됨


}