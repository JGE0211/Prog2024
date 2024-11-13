#include <stdio.h>

int main()
{
	int a = 3;
	int b = 4;

	printf("a & b = %d\n", a & b);
	printf("a | b = %d\n", a | b);
	printf("a ^ b = %d\n", a ^ b);
	printf("~a  = %d\n", ~a);
	printf("~b  = %d\n", ~b);
	printf("a << 2 = %d\n", a << 2);  
	printf("a >> 2 = %d\n", a >> 2);

	//a &= b;  // a = a&b를 의미 a&b의 값을 a에 넣음 (복합대입연산자)
	

	//masking <- 특정한 부위를 가릴때...
	int x = 106; // 0110 1010
	int mask =  15; // 0000 1111

	x &= mask; // x = x&mask
	printf("Masking : %d\n", x);

}