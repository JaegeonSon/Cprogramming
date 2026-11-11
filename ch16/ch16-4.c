// **********************************************
// 제 목 : 열거형을 활용한 방향 출력
// 날 짜 : 2026년 11월 11일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef enum direction {
    UP = 10,
    DOWN = 20,
    LEFT = 30,
    RIGHT = 40
} Direction;

int main() {
    Direction direction = UP;

    switch (direction) {
    case UP:
        printf("현재방향: 위");
        break;

    case DOWN:
        printf("현재방향: 아래");
        break;

    case LEFT:
        printf("현재방향: 왼쪽");
        break;

    case RIGHT:
        printf("현재방향: 오른쪽");
        break;
    }

    return 0;
}
