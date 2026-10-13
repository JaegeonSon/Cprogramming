// **********************************************
// 제 목 : 이름, 혈액형 입력 및 출력 코드
// 날 짜 : 2026년 10월 13일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
    char name[10];
    char blood_type;

    printf("이름을 입력하시오: ");
    scanf("%s", name);

    printf("혈액형을 입력하시오: ");
    scanf(" %c", &blood_type);

    printf("이름: %s\n", name);
    printf("혈액형: %c\n", blood_type);

    return 0;
}
