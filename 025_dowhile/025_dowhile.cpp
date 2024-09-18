//0을 입력할 때까지 입력한 숫자를 입력해라
#include <stdio.h>

int main()
{
	int n;

	do {
		scanf_s("%d", &n);
		//printf("%d\n", n);
	} while (n != 0);
}