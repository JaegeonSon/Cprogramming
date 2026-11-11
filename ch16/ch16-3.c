// **********************************************
// 제 목 : 공용체를 활용한 16진수 바이트 출력
// 날 짜 : 2026년 11월 11일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef union ubox {
    unsigned int num;
    unsigned char byte[4];
} UBox;

int main() {
    UBox data;

    printf("정수를 입력하시오(16진수): ");
    scanf("%x", &data.num);

    printf("최상위(4번째) 바이트(16진수): %02x\n", data.byte[3]);
    printf("3번째 바이트(16진수): %02x\n", data.byte[2]);
    printf("2번째 바이트(16진수): %02x\n", data.byte[1]);
    printf("최하위(1번째) 바이트(16진수): %02x\n", data.byte[0]);

    return 0;
}
