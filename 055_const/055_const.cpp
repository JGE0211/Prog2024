#include <stdio.h>
#define PI 3.141592
//const double PI = 3.141592; // 어디서 선언하느냐에 따라 지역변수 전역변수 됨


double getArea(double r) {
	return PI * r * r;
}
int main()
{ 
	//PI=3.14 //이런식으로 바꿀수 없음 상수는 변할 수 없음
	printf("%f\n", getArea(10));
}