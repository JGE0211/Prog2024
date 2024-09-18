#include <stdio.h>

int main() {
	int x;

	printf("숫자 입력:");
	scanf_s("%d", &x);

	if (x > 0)
		printf("x는 양수입니다.\n", x);
	else if (x == 0)
		printf("x는 0입니다.\n", x);
	else
		printf("x는 음수입니다.\n");
	
}