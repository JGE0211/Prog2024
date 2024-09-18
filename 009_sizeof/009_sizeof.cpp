

#include <stdio.h>

int main()
{
    printf("sizeof char = %d\n", sizeof(char));
    printf("sizeof short = %d\n", sizeof(short));
    printf("size long = %d\n", sizeof(long));
    printf("sizeof int = %d\n", sizeof(int));    //sizeof(unsigned in)으로 할 수 있음!!
    printf("sizeof long long = %d\n", sizeof(long long));

    printf("sizeof float = %d\n", sizeof(float));
    printf("sizeof double = %d\n", sizeof(double));
    printf("\n");

    char c;
    short s;
    long  l;
    int i;
    long long ll;
    float f;
    double d;

    printf("sizeof char = %d\n", sizeof(c));
    printf("sizeof short = %d\n", sizeof(s));
    printf("size long = %d\n", sizeof(l));
    printf("sizeof int = %d\n", sizeof(i));    //sizeof(unsigned in)으로 할 수 있음!!
    printf("sizeof long long = %d\n", sizeof(ll));

    printf("sizeof float = %d\n", sizeof(f));
    printf("sizeof double = %d\n", sizeof(d));
    

}

