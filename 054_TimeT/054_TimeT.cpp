#include <stdio.h>

struct Time {   // 구조체를 밖에서 만들면 전체에서 사용 가능 main에서 만든다면 main에서만 사용가능
	int h, m, s;
};

int totalSec(Time t) { // 구조체를 받아서 초로 변환 후 int로 저장
	return t.h * 3600 + t.m * 60  +t.s;
}

int totalSecP(Time *t) { // 구조체를 받아서 초로 변환 후 int로 저장
	return t->h * 3600 + t->m * 60  +t->s;
}
int main()
{
	Time t = { 1, 22, 48 };

	printf("%d\n", totalSec(t)); // 구조체 하나를 통째로 보냄
	printf("%d\n", totalSecP(&t));
}