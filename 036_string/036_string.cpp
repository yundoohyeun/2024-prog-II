// 036_string.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    //c언어에서 문자열을 문자배열에 저장한다
    //c언어에 string 타입이 없다

    char s[14] = "Hello, World!"; // 크기가 촤소한 14개짜리 배열

    printf("%s\n", s);

    char t[100] = { 'h', 'e', 'l', 'l', 'o','\0'};
    printf("%s\n", t);

    char name[20];

    printf("이름 입력 :");
    scanf_s("%s", name, 20);

    printf("%s\n", name);

}

