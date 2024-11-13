#include <stdio.h>
#define SQUARE(x) x*x  //디파인할 때 괄호 있으면 함수로 생각해도 무방

int square(int x) {
	return x * x;
}

int main()
{
	int a = 5;

	printf("%d\n", SQUARE(a));    // 매크로
	printf("%d\n", square(a));    // 함수
	printf("%d\n", a*a);          // 수식


	printf("\n%d\n", SQUARE(a+1));    // 컴파일 되기전에 저 스퀘어에 있는 문장으로 바뀜.. a+1*a+1로 바뀌게 되는 거라 1*a + a+ 1의 순서로 계산(사칙연산//연산자우선순위)  
	// ㄴ> 저기 위에 문장에 괄호를 쳐주면 36이 나올 것임
	printf("%d\n", square(a+1));    
	printf("%d\n", (a+1) * (a+1));

	a = 4;
	printf("\n%f\n", 100./SQUARE(a + 1));  // 
	printf("%f\n", 100. / square(a + 1));
}