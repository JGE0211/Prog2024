#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  //exit함수

int main()
{
	FILE* in;
	FILE* out;
	in = fopen("input.txt", "r");  	//fopen_s(&in,"input.txt", "r");  이건 vs에서 사용..
	
	
	in = fopen("input1.txt", "r");  //현재 input1이 만들어지지 않았기에... 오류뜸 
	if (in == NULL) {
		printf("input1.txt가 없습니다.\n");
		exit(1);  // 오류를 만나면 exit(영이아닌 숫자) 적으면 비정상인 상황을 만낫구나~~~ 빠져나가기
	}
	
	
	out = fopen("output.txt", "w");

	int n;

	fscanf(in, "%d", &n);  //fscanf_s(in, "%d", &n);  
	fprintf(out, "%d %d\n", n, n * n);
	printf("%d\n", n);

	fclose(in);
	fclose(out); ////파일 꼭 닫기
}