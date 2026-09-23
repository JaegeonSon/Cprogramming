// **********************************************
// 제 목 : 함수를 활용한 인자 값 교환 알고리즘 구현 코드
// 날 짜 : 2026년 9월 23일
// 작성자 : 2600099 손재건
// **********************************************


#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void swap(int* px, int* py);

int main(void)
{
    int x, y, z;

    printf("정수x를 입력 하시오: ");
    scanf("%d", &x);

    printf("정수y를 입력 하시오: ");
    scanf("%d", &y);

    printf("정수z를 입력 하시오: ");
    scanf("%d", &z);

    printf("swap함수 호출 전 x=%d, y=%d, z=%d\n", x, y, z);

    swap(&x, &y);
    swap(&y, &z);

    printf("swap함수 호출 후 x=%d, y=%d, z=%d\n", x, y, z);

    return 0;
}

void swap(int* px, int* py)
{
    int tmp;

    tmp = *px;
    *px = *py;
    *py = tmp;
}
