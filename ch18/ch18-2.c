// **********************************************
// 제 목 : 파일 입출력을 이용한 총점 및 평균 계산
// 날 짜 : 2026년 11월 19일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
    char name[20];
    int kor, eng, math, total;
    double avg;

    FILE* fp1 = fopen("input.txt", "rt");

    if (fp1 == NULL) {
        printf("입력 파일 열기 실패!\n");
        return -1;
    }

    FILE* fp2 = fopen("output.txt", "wt");

    if (fp2 == NULL) {
        printf("출력 파일 열기 실패!\n");
        fclose(fp1);
        return -1;
    }

    while (fscanf(fp1, "%19s %d %d %d",
        name, &kor, &eng, &math) == 4) {

        total = kor + eng + math;
        avg = total / 3.0;

        fprintf(fp2, "%s %d %.1f\n",
            name, total, avg);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
