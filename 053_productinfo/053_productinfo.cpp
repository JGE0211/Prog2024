#include <stdio.h>
#include <string.h>


// 구조체 정의
struct ProductInfo {  // 구조체 이름 대부분 대문자 사용...
	int num;   // 상품번호
	char name[100];  // 상품명
	int cost;  //가격
};
void swap(ProductInfo a, ProductInfo b);  //값에 의한 호출 //////////////////////////////////////////////////////프로토타입 먼저 선언해주고 밑에다가 함수 지정해도 ㄱㅊ
void swap2(ProductInfo* a, ProductInfo* b); // 주소에 의한 호출

int main()
{
	ProductInfo x;

	x.num = 1001;    // 멤버를 부르려면 . 사용
	strcpy_s(x.name, sizeof(x.name), "제주 한라봉");   // 문자열은 x.name = 이런시긍로 못하기에 복사함
	//strcpy(x.name, "제주 한라봉"); <- 표준으로 햇으면 .. 일케 씀
	x.cost = 20000;

	ProductInfo y = { 1002, "성주 꿀참외", 15000 };  // 선언하며 초기화!

	printf("x : %d %15s %7d\n", x.num, x.name, x.cost);
	printf("y : %d %15s %7d\n", y.num, y.name, y.cost);
	

	ProductInfo z;  // = x; 이렇게 한줄로 초기화 가능 
	z = x;  // 다른 구조체를 할당 가능

	printf("z : %d %15s %7d\n", z.num, z.name, z.cost);

	// 구조체 메모리
	printf("\n구조체 메모리\n");
	printf("%d\n", sizeof(x));
	printf("%d\n", &x);
	printf("%d\n", &x.num);
	printf("%d\n", &x.name);
	printf("%d\n", &x.cost);
	

	// 구조체의 포인터
	ProductInfo a = { 1003, "대전 성심당빵", 3500 };
	ProductInfo* p;

	// 구조체 포인터로 멤버를 사용하기(->사용)
	p = &a;
	printf("\n구조체 포인터\n");
	printf("%d %15s %7d\n", a.num, a.name, a.cost);
	printf("%d %15s %7d\n", (*p).num, (*p).name, (*p).cost);  //이러면 너무 번거롭고 복자븜.
	printf("%d %15s %7d\n", p->num, p->name, p->cost);  // 화살표를 써서 간편하게! 쓰는 것이 좋음


	//구조체 swap /// 10001번(x)과 1003번(a) 상품을 바꾸자
	swap(x, a);
	printf("\n값에 의한 호출\n");
	printf("x: %d %15s %7d\n", x.num, x.name, x.cost);
	printf("a: %d %15s %7d\n", a.num, a.name, a.cost);


	swap2(&x, &a);
	printf("\n주소에 의한 호출\n");
	printf("x: %d %15s %7d\n", x.num, x.name, x.cost);
	printf("a: %d %15s %7d\n", a.num, a.name, a.cost);
}

void swap(ProductInfo a, ProductInfo b)
{
	ProductInfo tmp = a;
	a = b;
	b = tmp;
}

void swap2(ProductInfo *a, ProductInfo *b)
{
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}