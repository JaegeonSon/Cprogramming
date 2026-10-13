// **********************************************
// 제 목 : 반복문을 활용한 문자열 무한 입력 코드
// 날 짜 : 2026년 10월 13일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
    char ch;

    while (1) {
        printf("문자입력 : ");

        if (scanf(" %c", &ch) != 1) {
            break;
        }

        if (ch == 'q' || ch == 'Q') {
            break;
        }

        printf("입력된 문자는 %c\n", ch);
    }

    return 0;
}
