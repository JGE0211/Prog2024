#include <stdio.h>

int main()
{
	// C언어에서 문자열을 문자배열에 저장한다
	// C언어에 string 타입이 없다
	char s[] = "Hello, World!"; // 크기가 최소한 14개짜리 배열
	//     ㄴ> 13을 치면 오류 생김 ~> over floor 자리가 모자르다!!
	printf("%s\n\n", s);

	char t[5] = { 'h','e','l','l','o' };

	printf("%s\n\n", t);

	char name[20];

	printf("이름 입력 : ");
	scanf_s("%s", name, 20); // vs에서는 문자열 입력 받을 때
	                          // 문자열의 길이를 쓰게 함.
	
     /*scanf_s("%s", &name, 20) 이게 표준*/
	printf("%s\n", name);

}