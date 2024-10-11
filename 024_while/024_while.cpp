// 024_while.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int i = 1;

	while (true) {
		printf("%d ", i);
		i++;
		if (i > 100)
			break;
	}
	printf("\n");

	int x = 1;
	// do - while

	do {
		printf("%d ", x);
		x++;
	} while (x <= 100);
}

