// 013_ASCII2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    char c = '/';
    
    printf("%c %X %d\n", c, c, c);  //대문자로 쓰면 대문자로 나옴 but, d는 안 됨
    printf("\n");

    char d = '$';
    printf("%c %X %d\n", d, d, d);
    printf("%c 0x%X %d\n", d, d, d);
    printf("\n");

    int a = 72;
    printf("%c 0x%X %d\n", a,a,a);
}


