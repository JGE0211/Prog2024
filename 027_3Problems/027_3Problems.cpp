//1.별표를 n개 출력한다
//2.1부터 n까지 홀수를 출력한다
//3.1부터 n까지 자연수를 모두 더한다 ***********************************************이 세 개 문제 너므 중요해요 
#include <stdio.h>

int main()
{
	int n;

	printf("n은 몇?:");
	scanf_s("%d", &n);

	//while문 (1)
	int x = 1;

	while (x <= n) {
		printf("%c", '*');
		x++;
	}
	printf("\n");

	//while문 (2)
	x = 1;

	while (x <= n) {
		printf("%d ", x);
		x += 2;                     // 2를 입력하면 1만 출력되는 이유는 n은 2이고 x가 두 번째로 반복될 때 +2가 되어 x가 3이 되기 때문에 n보다 커지게 되어 1만 출력이 됨
	}
	printf("\n");

	//while문 (3)



	//do-while문
	/*int n;

	printf("1부터 몇 개의 홀수를 출력할 건가요?");
	scanf_s("%d", &n);

	int x = 1;

	do {
		printf("%d ", x);
		x += 2;
	} while ();*/

	//for문
}