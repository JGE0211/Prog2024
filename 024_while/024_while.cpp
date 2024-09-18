#include <stdio.h>

int main() 
{
	/*int i = 1;

	while (i <= 10) 
	{
		printf("%d ", i);
		i++;
	}
	printf("\n");*/



	int i = 1;

	while (true)    /// 무한루프;; 계속 참이기에 계속 1씩 증가하며 무한반복!!!!! ~~~ 20억 이상이면 엉뚱한 숫자가 나옴 (over flour?플로어)
	{
		printf("%d ", i);
		i++;

		if (i > 100) //// 무한루프를 사용할 때 ~~> 빠져나오게 설정하기
			break;
	} 
	printf("\n\n");



	// do-while문
	int x = 1;

	do {
		printf("%d ", x);
		x++;

	} while (x <= 10);
	printf("\n");


}