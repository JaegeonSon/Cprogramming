// **********************************************
// 제 목 : 텍스트 파일 복사 프로그램
// 날 짜 : 2026년 11월 17일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

int main() {
    char source[100], target[100];
    int ch;
    FILE* fp1;
    FILE* fp2;

    printf("복사할 파일명 : ");
    scanf("%99s", source);

    printf("복사받을 파일명 : ");
    scanf("%99s", target);

    if (strcmp(source, target) == 0) {
        printf("원본 파일과 복사받을 파일명이 같습니다.\n");
        return -1;
    }

    fp1 = fopen(source, "rt");

    if (fp1 == NULL) {
        printf("원본 파일 열기 실패!\n");
        return -1;
    }

    fp2 = fopen(target, "wt");

    if (fp2 == NULL) {
        printf("복사받을 파일 열기 실패!\n");
        fclose(fp1);
        return -1;
    }

    while (1) {
        ch = fgetc(fp1);

        if (ch == EOF)
            break;

        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("%s파일을 %s파일로 복사했습니다.\n", source, target);

    return 0;
}
