// **********************************************
// 제 목 : 학생 성적 정렬 및 파일 출력
// 날 짜 : 2026년 11월 19일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct student {
    char name[20];
    int kor;
    int eng;
    int math;
    int total;
    double avg;
} Student;

int main() {
    Student std[3], temp;

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

    for (int i = 0; i < 3; i++) {
        if (fscanf(fp1, "%19s %d %d %d",
            std[i].name,
            &std[i].kor,
            &std[i].eng,
            &std[i].math) != 4) {

            printf("학생 정보 입력 실패!\n");
            fclose(fp1);
            fclose(fp2);
            return -1;
        }

        std[i].total = std[i].kor
                     + std[i].eng
                     + std[i].math;

        std[i].avg = std[i].total / 3.0;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (std[i].total < std[j].total) {
                temp = std[i];
                std[i] = std[j];
                std[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        fprintf(fp2, "%d등: %s %d %.1f\n",
            i + 1,
            std[i].name,
            std[i].total,
            std[i].avg);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
