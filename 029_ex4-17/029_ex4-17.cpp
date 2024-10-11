// 029_ex4-17.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;

    printf("자연수 입력 :");
    scanf_s("%d", &n);

    /* for (; n >= 1; n--) {
         printf("%d ", n);
     }
     printf("\n");*/

     //2의 제곱
    int pow, i;

    /*for (int i = 1; i <= n; i++) {
    pow *= 2;
}*/
    for ( i = 1, pow = 1; i <= n; i++, pow *= 2); //중복 적용이 가능
    printf("%d\n",pow);
}

