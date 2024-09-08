
#include <stdio.h>

int main()
{
    int math = 95;
    int eng = 97;
    int kor = 88;

    int sum = math + eng + kor;
    double avg = sum / 3;  //  정수/정수 -> 정수  (소수점 아래 숫자들이 사라짐!!)
    //제대로 된 계산 값을 만드려면!!!
    //방법 1. double avg = sum / 3.0;        <- 실수로 나눔
    //방법 2. double avg =(double)sum / 3;   <- sum을 double로 바꿈
    ////////////ㄴ> double avg =(double)(sum / 3 )     <---이렇게 되면 괄호 안의 sum/3 먼저 계산 뒤, 더블로 형을 바꾸게 됨!!! 그러니 괄호 잘 하기!!!
    printf("평균 : %f\n", avg);
}

