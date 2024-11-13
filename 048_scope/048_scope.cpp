#include <stdio.h>

int a = 10; // 여기 a와 (전역변수)

void aaa()
{
	printf("in aaa: a = %d\n", a);  // 전역변수 사용
}

void bbb()
{
	int a = 20;  //  여기 a는 다른 변수임 (지역변수)

	printf("in bbb: a = %d\n", a); // 쓸 수 있는 게 두개임(전역a, 지역a) 가까운 변수를 사용함 so 로컬 변수를 씀
}

int main()
{
	aaa(); 
	bbb();
}