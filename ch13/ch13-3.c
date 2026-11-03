// **********************************************
// 제 목 : 구조체로 자동차 모델, 번호판, 주행거리 입출력
// 날 짜 : 2026년 11월 03일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct Car {
    char model[20];
    char carnum[30];
    int kilo;
};

int main(void) {
    struct Car c1;

    printf("모델을 입력하세요:");
    scanf("%s", c1.model);

    printf("번호판을 입력하세요:");
    scanf("%s", c1.carnum);

    printf("주행거리를 입력하세요:");
    scanf("%d", &c1.kilo);

    printf("1.모델:%s\n", c1.model);
    printf("2.번호판:%s\n", c1.carnum);
    printf("3.주행거리:%dkm\n", c1.kilo);

    return 0;
}
