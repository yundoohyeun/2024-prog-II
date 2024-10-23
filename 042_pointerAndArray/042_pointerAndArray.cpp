

#include <stdio.h>

int main()
{
    // 10개 짜리 정수 배열 선언

    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    // 정수형 포인터 선언

    int* p;

    p = arr;
    printf("%d\n", *p);
    printf("%d %d \n", *(p+1), *p+1);

    printf("%p %p %p %p\n", arr, &arr[0], p + 1, &arr[1]);
    printf("%p %p %p %p\n", p, &p[0], arr + 1, &p[1]);
}
