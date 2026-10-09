// **********************************************
// 제 목 : 함수 포인터를 매개변수로 활용한 프로그램
// 날 짜 : 2026년 10월 09일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void compute(int num, void (*callback)(int));
void display_result(int result);

int main(void) {
    compute(5, display_result);
    return 0;
}

void compute(int num, void (*callback)(int)) {
    callback(num * num);
}

void display_result(int result) {
    printf("계산 결과: %d\n", result);
}
