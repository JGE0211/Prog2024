#include <stdio.h>

int main()
{
	char ch;

	//ch = getchar();   // 무조건 글자 하나만 받아들임
    //putchar(ch); // 하나만 출력 하는 것

	while (true) {
		ch = getchar();
		if (ch == '\n')
			break;
		putchar(ch);
	}
}