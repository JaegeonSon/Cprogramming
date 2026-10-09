// **********************************************
// 제 목 : void 포인터를 매개변수로 활용한 프로그램
// 날 짜 : 2026년 10월 09일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void printValue(void* ptr, char type);

int main(void) {
    int num = 10;
    double decimal = 3.14;
    char letter = 'A';

    printValue(&num, 'i');
    printValue(&decimal, 'd');
    printValue(&letter, 'c');

    return 0;
}

void printValue(void* ptr, char type) {
    if (type == 'i') {
        printf("정수: %d\n", *(int*)ptr);
    }
    else if (type == 'd') {
        printf("실수: %.2f\n", *(double*)ptr);
    }
    else if (type == 'c') {
        printf("문자: %c\n", *(char*)ptr);
    }
}
