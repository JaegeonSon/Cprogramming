// **********************************************
// 제 목 : 실습과제5 : 반복문과 다차원 배열을 활용한 사전에서 가장 뒤에 나오는 문자열 출력 코드
// 날 짜 : 2026년 10월 01일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char str[4][10];
    int chk = 0;

    for (int i = 0; i < 4; i++) {
        printf("%d번째 문자열 입력:", i + 1);
        scanf("%9s", str[i]);
    }

    for (int i = 1; i < 4; i++) {
        if (str[chk][0] < str[i][0]) {
            chk = i;
        }
    }

    printf("사전에서 제일 뒤에 나오는 문자열:%s\n", str[chk]);

    return 0;
}
