﻿// 006_relational.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int a = 30, b = 50;

	bool p = a > b;
	bool q = a < b;
	bool r = a == b;

	printf("%d %d %d\n", p, q, r);
}

