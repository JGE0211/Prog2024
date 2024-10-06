#include <stdio.h>

int main()
{
	int a[1000] = { 0 };
	int n;

	printf("입력 숫자의 개수 : ");
	scanf_s("%d", &n);

	printf("숫자 입력 :");

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);  //변수가 바뀌며 인덱스에 하나씩 저장
	}

	//앞에서부터 출력
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	//뒤에서부터 출력
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	printf("\n");

	//최댓값 찾기(탐색)****
	int max = a[0];
	int min = a[0];

	for (int i = 1; i < n; i++) {
		if (a[i] > max) /// a[i]이 max보다 크면
			max = a[i]; /// max에 m[i] 저장
		if (a[i] < min)
			min = a[i];
	}
	printf("max = %d\n", max);
	printf("min = %d\n", min);


	// 배열에 저장된 짝수의 개수를 출력하시오
	int cnt = 0;

	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0) // 요소가 짝수일 때
			cnt++;        //  cnt 1씩 증가

	printf("짝수의 개수 : %d\n", cnt);



}