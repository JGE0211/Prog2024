#include <stdio.h>

int main() {
	int a, b, c;

	printf("숫자 입력:");
	scanf_s("%d%d%d", a, b, c);


	if (a > b) {
		if (b > c)
			printf("%d %d %d", a, b, c);
		else/*b < c*/ {
			if (a > c)
				printf("%d %d %d", a, c, b);
			else
				printf("%d %d %d", c, a, b);
		}
		

	}

	else /* b > a*/ {
		if (a > c)
			printf("%d %d %d", b, a, c);
		else/*a < c*/ {
			if (b > c)
				printf("%d %d %d", b, c, a);
			else/*b<c*/
				printf("%d %d %d", c, b, a);
		}
	}


}

////////////// 쉬운방법으로 짜 보기.