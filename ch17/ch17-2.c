// **********************************************
// 제 목 : 텍스트 파일의 내용을 줄바꿈하여 출력
// 날 짜 : 2026년 11월 17일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
    int ch;
    FILE* fp = fopen("test.txt", "rt");

    if (fp == NULL) {
        printf("파일 열기 실패!\n");
        return -1;
    }

    while (1) {
        ch = fgetc(fp);

        if (ch == EOF)
            break;

        putchar(ch);

        if (ch == '.')
            putchar('\n');
    }

    fclose(fp);

    return 0;
}
