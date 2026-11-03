// **********************************************
// 제 목 : 구조체로 사각형 좌표 입력 후 폭과 높이 구하기
// 날 짜 : 2026년 11월 03일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int x;
    int y;
};

int main(void) {
    struct Rectangle Lupper, Rlower;
    
    printf("좌측 상단의 좌표 입력:");
    scanf("%d %d", &Lupper.x, &Lupper.y);

    printf("우측 하단의 좌표 입력:");
    scanf("%d %d", &Rlower.x, &Rlower.y);

    printf("사각형의 폭:%d\n", abs(Lupper.x - Rlower.x));
    printf("사각형의 높이:%d\n", abs(Lupper.y-Rlower.y));

    return 0;
}
