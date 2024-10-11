// 027_3problom.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{

    int n = 1;

    printf("n를 입력하세요 :");
    scanf_s("%d", &n);

    //while 문 (1)

    int i = 1;
    
    while (i <= n) {
        printf("*");
        i++;
    }
    printf("\n");

    //while 문 (2)
    
    i = 1;

        while (i <= n) {
            printf("%d ", i);
            i += 2;
        }

        printf("\n");
    //while 문 (3)

    i = 1;
        int sum = 0;

        while (i <= n) {
            sum = sum + i;
            i = i + 1;
        }
        printf("sum = %d", sum);
     

    //do - while 문

    // for 문


}

