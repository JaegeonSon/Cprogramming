// **********************************************
// 제 목 : 학생 정보 파일 저장
// 날 짜 : 2026년 11월 19일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
    char name[20];
    int number;
    double grade;
    FILE* fp = fopen("result.txt", "wt");

    if (fp == NULL) {
        printf("파일 열기 실패!\n");
        return -1;
    }

    for (int i = 0; i < 3; i++) {
        printf("이름,학번,학점입력: ");
        scanf("%19s %d %lf", name, &number, &grade);

        fprintf(fp, "%s %d %.1f\n", name, number, grade);
    }

    fclose(fp);

    return 0;
}
