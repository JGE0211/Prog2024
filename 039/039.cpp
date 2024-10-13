#include <stdio.h>

int main()
{
	int a = 10;

	printf("%d = %d\n", &a, a); // d는 정수로 입력해줌. &a는 a의 주소를 의미함
	printf("%p = %d\n", &a, a); // p는 16진수로 입력해줌. &a는 a의 주소를 의미함
	//주소를 마음대로 지정할 수 없음 (특정 주소에 저장 못함)
	//주소는 알아서 지정 되는 것!! 그래서 저장된 주소를 알 수 있음


	int* ptr;
	ptr = &a;

	printf("%p = %p = %d\n", &a, ptr, a);

	*ptr = 20;  // a = 20;
	printf("%p = %p = %d\n", &a, ptr, a);

}