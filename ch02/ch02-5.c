// **********************************************
// 제 목 : 포인터 대상 변경과 값 연산 프로그램
// 날 짜 : 2026년 9월 9일
// 작성자 : 2600099 손재건
// **********************************************

#include <stdio.h>

int main(void)
{
    int num1 = 30, num2 = 50;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* temp;

    *ptr1 += 20;
    *ptr2 -= 15;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    *ptr1 += 5;
    *ptr2 *= 2;

    printf("num1 : %d\n", num1);
    printf("num2 : %d\n", num2);
    printf("ptr1이 가리키는 값 : %d\n", *ptr1);
    printf("ptr2가 가리키는 값 : %d\n", *ptr2);

    return 0;
}
