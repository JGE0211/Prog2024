#include <stdio.h>

int main() {
	int choice;

	printf("1. 새 게임\n");
	printf("2. 불러오기\n");
	printf("3. 설정\n");
	printf("4. 크레딧\n");
	printf("메뉴를 선택하시오:");

	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("새 게임\n");
		break;
	case 2:
		printf("불러오기\n");
		break;
	case 3:
		printf("설정\n");
		break;
	case 4:
		printf("크레딧\n");
		break;
	default:
		printf("잘못 입력하셨습니다.\n");
		break;
	}

	//break가 없으면 그 다음 줄로 넘어가서 출력하게 됨 (계속 밑으로 진행됨!!)
	//case를 합칠 수도 있음
	//case 옆은 정수형이나 문자형 열거형(enum)만 넣을 수 있다 ... 변수XX
}