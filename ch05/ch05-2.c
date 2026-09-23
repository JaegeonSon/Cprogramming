// **********************************************
// 제 목 : 포인터와 함수의 매개변수 개념을 활용한 증가값 반영 코드
// 날 짜 : 2026년 9월 23일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void add2(int* ptr);

int main(void)
{
    int number;

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    add2(&number);

    printf("2만큼 증가한 값: %d\n", number);

    return 0;
}

void add2(int* ptr)
{
    *ptr += 2;
}
