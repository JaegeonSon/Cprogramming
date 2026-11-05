// **********************************************
// 제 목 : 구조체 배열을 활용한 직원 급여 관리
// 날 짜 : 2026년 11월 05일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct employee {
    char name[20];
    int id;
    int salary;
};

int main(void) {
    struct employee staff[4];
    int max = 0;
    long long total = 0;

    for (int i = 0; i < 4; i++) {
        printf("[%d번째 직원]\n", i + 1);

        printf("이름 입력:");
        scanf("%19s", staff[i].name);

        printf("사번 입력:");
        scanf("%d", &staff[i].id);

        printf("급여 입력:");
        scanf("%d", &staff[i].salary);

        total += staff[i].salary;

        if (staff[i].salary > staff[max].salary) {
            max = i;
        }
    }

    printf("\n===== 전체 직원 정보 =====\n");

    for (int i = 0; i < 4; i++) {
        printf("이름:%s, 사번:%d, 급여:%d원\n",
            staff[i].name, staff[i].id, staff[i].salary);
    }

    printf("\n===== 급여 분석 결과 =====\n");

    printf("최고 급여 직원:%s\n", staff[max].name);
    printf("사번:%d\n", staff[max].id);
    printf("급여:%d원\n", staff[max].salary);

    printf("평균 급여:%.2f원\n", total / 4.0);

    return 0;
}
