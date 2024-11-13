#include <stdio.h>
enum color {Red, Green, Blue};  // 구조체 처럼 이름을 붙여줄 수 있음 color라는 타입이 새로생긴거임 이 color는 세 개으ㅣ 값만 갖는 타입인 것임
 //          0     1     2

int main()
{
	color x, y;

	x = Red;
	y = Blue;

	printf("%d %d\n", x, y);  // red blue로 쓰는 것이 아닌 color에 저장된 순서대로 찍힘

	if (x == Red)
		printf("Red\n");
}