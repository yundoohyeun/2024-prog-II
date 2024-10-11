// 019_evenOdd.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;

    printf("숫자 입력: ");
    scanf_s("%d", &n);

    /*if (n % 2 == 0)
        printf("%d는 짝수입니다.\n",n);

    if (n % 2 == 1)
        printf("%d는 홀수입니다.\n",n);*/

    if (n % 2 == 0) {
        printf("%d는 짝수입니다.\n", n);
        printf("%d는 짝수입니다. hahaha\n", n);
    }
    else {
    printf("%d는 홀수입니다.\n", n);
    printf("%d는 홀수입니다. zzz\n", n);

    }
}

