// **********************************************
// 제 목 : 구조체를 활용한 최우수 학생 구하기
// 날 짜 : 2026년 11월 11일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct student {
    char name[20];
    int stdnum;
    int kor;
    int eng;
    int math;
    double avg;
} Student;

int main() {
    Student stds[3];
    int max = 0;

    for (int i = 0; i < 3; i++) {
        printf("이름: ");
        scanf("%19s", stds[i].name);

        printf("학번: ");
        scanf("%d", &stds[i].stdnum);

        printf("국어: ");
        scanf("%d", &stds[i].kor);

        printf("영어: ");
        scanf("%d", &stds[i].eng);

        printf("수학: ");
        scanf("%d", &stds[i].math);

        stds[i].avg = (stds[i].kor + stds[i].eng + stds[i].math) / 3.0;

        if (stds[i].avg > stds[max].avg) {
            max = i;
        }
    }

    printf("\n<최우수 학생정보>\n");
    printf("%s %d %d %d %d %.2f\n",
        stds[max].name,
        stds[max].stdnum,
        stds[max].kor,
        stds[max].eng,
        stds[max].math,
        stds[max].avg);

    return 0;
}
