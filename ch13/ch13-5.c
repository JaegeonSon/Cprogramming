// **********************************************
// 제 목 : 구조체의 두 값을 상호 교환하기(함수 및 포인터 활용)
// 날 짜 : 2026년 11월 03일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void Swap(int* x, int* y);

struct point {
    int x;
    int y;
};

int main(void) {
    struct point p1 = { 10, 10 }, p2 = { 20, 20 };

    printf("교환 전 P1의 좌표:(%d, %d)\n", p1.x, p1.y);
    printf("교환 전 P2의 좌표:(%d, %d)\n", p2.x, p2.y);

    Swap(&p1.x, &p2.x);
    Swap(&p1.y, &p2.y);

    printf("교환 후 P1의 좌표:(%d, %d)\n", p1.x, p1.y);
    printf("교환 후 P2의 좌표:(%d, %d)\n", p2.x, p2.y);

    return 0;
}

void Swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
