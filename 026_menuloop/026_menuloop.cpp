﻿#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    do {
        printf("새 게임 : 1\n");
        printf("불러오기 : 2\n");
        printf("설정 : 3\n");
        printf("크레딧 : 4\n");
        printf("종료 : 5\n");
        printf("메뉴를 선택하십시오 : ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:  printf("새 게임.\n");
            break;

        case 2: printf("불러오기.\n");
            break;

        case 3: printf("설정\n");
            break;

        case 4: printf("크레딧\n");
            break;

        case 5: printf("종료\n");
            break;

        default:
            printf("잘못입력하셨습니다.\n");

        }
    } while (choice != 5);
}
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
