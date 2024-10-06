#include <stdio.h>

int main()
{
	int n;

	printf("n 입력: ");
	scanf_s("%d", &n);


	for (int i = n; i >= 1; i--)
		printf("%d ", i);
	printf("\n");

	/*for (; n >= 1; n--) { // 초기 조건 생략
		printf("%d ", n);
	}
	printf("\n");*/



	//2^n
	int pow; /*= 1;

	for (int i = 1; i <= n; i++)
		pow *= 2;*/
	for (int i = 1, pow = 1; i <= n; i++, pow *= 2); ///// ;(콤마)로 초기조건, 반복조건, 변화를 구분함
	     ///요기다가 int하면 pow와 i에서 for에서만 쓸 수 있는 것이 새로 생김 위의 pow와는 다른 pow임 위의 pow는 main함수에서 다 쓸 수 있는.. 것!!
	printf("%d\n", pow);


	int pow, i;
	for ( i = 1, pow = 1; i <= n; i++, pow *= 2); // 그래서 pow,i를 먼저 int로 한다면,,,,, for에서 int를 사용하지 않고 그대로 변수들을 부름
}