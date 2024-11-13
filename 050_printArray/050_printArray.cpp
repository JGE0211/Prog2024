#include <stdio.h>

void printArr(int a[], int n) {
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

/*void printArr(int* a, int n) {  /////이렇게 포인터로 주소를 받아올 수 있음
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}*/

void changeArr(int a[], int n) {
	for (int i = 0; i < n; i++)
		a[i] *= a[i];
}


// 2차원 배열을 매개변수로 전달받는 방법
void printArr2(int a[][4], int n) {  // 열은 안 써줘도 되는데 행은 꼭 써줘야됨,, 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}

}



int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };


	printArr(a, 5);  ///배열으ㅣ 이름(배열의 주소)과 원소 개수를 넘겨준다
	changeArr(a, 5);
	printArr(a, 5);


	printArr2(b, 3);  // 2차원 배열을 매개변수로 전달하는 방법
}