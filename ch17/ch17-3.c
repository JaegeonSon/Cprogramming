// **********************************************
// 제 목 : 문자열의 공백을 줄바꿈으로 변환하여 파일 저장
// 날 짜 : 2026년 11월 17일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
    int ch;
    FILE* fp = fopen("result.txt", "wt");

    if (fp == NULL) {
        printf("파일 열기 실패!\n");
        return -1;
    }

    printf("문자열을 입력하시오: ");

    while (1) {
        ch = getchar();

        if (ch == '\n' || ch == EOF)
            break;

        if (ch == ' ')
            fputc('\n', fp);
        else
            fputc(ch, fp);
    }

    fclose(fp);

    return 0;
}
