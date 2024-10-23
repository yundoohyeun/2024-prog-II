// 048_scope.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int a = 10;

void aaa() 
{
    printf("in aaa: a = %d\n", a);
}

void bbb() 
{
    int a = 20;

    printf("in bbb: a %d\n", a);
}
int main()
{
    aaa();
    bbb();
}
