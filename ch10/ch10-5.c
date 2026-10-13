// **********************************************
// 제 목 : 문자열 입력 후 출력 코드
// 날 짜 : 2026년 10월 13일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
    char str[20];
    char ch;
    int i = 0;

    printf("문자열을 입력하시오: ");

    while (1) {
        if (scanf("%c", &ch) != 1) {
            break;
        }

        if (ch == '\n') {
            break;
        }

        if (i < 19) {
            str[i] = ch;
            i++;
        }
    }

    str[i] = '\0';

    printf("문자열: %s\n", str);

    return 0;
}
