// **********************************************
// 제 목 : 중첩 구조체를 활용한 직각삼각형 판별
// 날 짜 : 2026년 11월 05일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct point {
    int x;
    int y;
};

struct triangle {
    struct point p[3];
};

int main(void) {
    struct triangle t;
    long long a, b, c;

    for (int i = 0; i < 3; i++) {
        printf("%d번째 점(x,y) 입력: ", i + 1);
        scanf("%d %d", &t.p[i].x, &t.p[i].y);
    }

    a = (long long)(t.p[0].x - t.p[1].x) *
        (t.p[0].x - t.p[1].x) +
        (long long)(t.p[0].y - t.p[1].y) *
        (t.p[0].y - t.p[1].y);

    b = (long long)(t.p[1].x - t.p[2].x) *
        (t.p[1].x - t.p[2].x) +
        (long long)(t.p[1].y - t.p[2].y) *
        (t.p[1].y - t.p[2].y);

    c = (long long)(t.p[2].x - t.p[0].x) *
        (t.p[2].x - t.p[0].x) +
        (long long)(t.p[2].y - t.p[0].y) *
        (t.p[2].y - t.p[0].y);

    if (a > 0 && b > 0 && c > 0 &&
        (a + b == c || a + c == b || b + c == a)) {
        printf("삼각형은 직각삼각형임\n");
    }
    else {
        printf("삼각형은 직각삼각형 아님\n");
    }

    return 0;
}
