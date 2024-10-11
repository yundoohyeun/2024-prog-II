// 002_type conversion.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english; // 세 정수의 합을 sum에 저장한다.
	double avg = (double)sum / 3; // sum 을 3으로 나눠 평균을 구한다.

	printf("평균 점수 : %f\n", avg);
}

