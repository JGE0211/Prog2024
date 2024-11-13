#include <stdio.h>

int itemCnt = 0;   //전역변수(global value)
int money = 100;

void buyItem(int price, int cnt) {  // 매개변수에 보내준 숫자를 저장함
	if (money >= price) {
		itemCnt += cnt;
		money -= price;
		printf("아이템을 구매했습니다.\n");
		printf("  아이템 개수: %d\n", itemCnt);
		printf("  잔액: %d\n", money);
	}
	else
		printf("잔액이 부족합니다\n");
}

int plus(int a, int b)
{
	return a + b;
}

int main()
{
	buyItem(30, 5); //호출 할 때 숫자를 보내줌
	printf("\n");
	buyItem(40, 7);
	printf("\n");
	buyItem(20, 1);
	printf("\n");
	buyItem(30, 2); // 잔액이 -로 됨.. >> -가 되면 살 수 없게 하자!!!!!!!!!!!!(돈이 없으니까요) >> if문 사용
	printf("\n");


	int sum = plus(3, 5);
	printf("%d\n", sum);
}
