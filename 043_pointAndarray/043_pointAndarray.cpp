﻿#include <stdio.h>

int main()
{
	//10개짜리 정수 배열 선언
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };

	//정수형 포인터 선언
	int* p;
	p = a;

	printf("%d\n", *p); // *p <- p에 저장된 주소에 저장된 값
	printf("%d %d\n", *(p+1), *p+1);  // *(p+1)는 p의 다음 주소를 가르킴(4바이트가 더해짐) , (*p)+1으로 *p에 저장된 주소의 값에 +1 값
	printf("%p %p %p %p\n", a, &a[0], p+1, &a[1]);
	printf("%p %p %p %p\n", p, &p[0], a + 1, &a[1]); // 배열과 포인터가 연결되면 서로 똑같기에 바꿔서 써도 ㄱㅊ


	double x = 3.14;
	double* d;  //////////포인터는 정수로 밖에 저장이 안 됨
	d = &x;

	printf("%f, %f, %p, %p\n", x, *d, &x, d);
}