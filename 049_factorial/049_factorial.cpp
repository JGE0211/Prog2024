#include <stdio.h>
/*int fact(int n)
{
	int gop = 1;
	for (int i = 1; i <= n; i++) {
		gop *= i;
	}
	return gop;
}
int main()
{
	int n;
	printf("n 입력:");
	scanf_s("%d", &n);

	printf("%d! = %d\n", n, fact(n));
}*/
//---------------------------------------반복문으로 팩토리얼

/*int fact(int n)
{
	if (n == 1)
		return 1;
	return n * fact(n - 1);
}
int main()
{
	int n;
	printf("n 입력:");
	scanf_s("%d", &n);

	printf("%d! = %d\n", n, fact(n));
}*/
//--------------------------------------------재귀함수로 팩토리얼 내가 해 본 거


int factorial(int n) 
{
	if (n == 1)
		return 1;
	return factorial(n - 1) * n;
}

int main()
{
	int n;
	printf("n 입력:");
	scanf_s("%d", &n);

	//1부터 n까지 합을 구하시오
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	printf("%d\n", sum);

	//1부터 n까지 반복분으로 곱하기 (반복문으로의 팩토리얼...)
	int p = 1;
	for (int i = 1; i <= n; i++) {
		p *= i;
		printf("%d! = %d\n", i, p);
	}

	//재귀함수로의 팩토리얼
	printf("%d\n", factorial(n));

}


