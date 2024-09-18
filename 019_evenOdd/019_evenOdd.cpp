#include <stdio.h>

int main()
{
	int x;  //선언문

	printf("숫자 입력:"); //프린트문
	scanf_s("%d", &x); //스캔에프문

	/*if (x % 2 == 0)
		printf("%d는 짝수입니다.\n", x);  //이프문

	if(x % 2 == 1)
		printf("%d는 홀수입니다.\n", x);*/  //이프문

		// => 총 5개의 문장
		// if-else를 사용하여 문장 줄이기

	if (x % 2 == 0) {
		printf("%d는 짝수입니다.\n", x);
		printf("hahahah\n");
	}                                   // {}은 안의 문장이 2개 이상일 경우 꼭 사용하기

	else
		printf("%d는 홀수입니다.\n", x);  



}