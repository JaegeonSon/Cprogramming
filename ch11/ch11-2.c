// **********************************************
// 제 목 : q(Q) 입력 전까지 무한 문자 입력받고 출력하기
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void printText(const char* text)
{
    while (*text != '\0') {
        putchar((unsigned char)*text);
        text++;
    }
}

int main(void)
{
    int ch, rest;

    while (1) {
        printText("문자입력: ");
        ch = getchar();

        if (ch == EOF)
            break;

        while ((rest = getchar()) != '\n' && rest != EOF) {
        }

        if (ch == 'q' || ch == 'Q')
            break;

        printText("입력된 문자는 ");
        putchar(ch);
        putchar('\n');

        if (rest == EOF)
            break;
    }

    return 0;
}
