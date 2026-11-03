// **********************************************
// 제 목 : 구조체 정의 후 학번, 이름, 주소 입력받기
// 날 짜 : 2026년 11월 03일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct student {
    int snum;
    char name[10];
    char adress[30];
};

int main(void) {
    struct student s1;
    int ch;

    printf("학번 입력:");
    scanf("%d", &s1.snum);

    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("이름 입력:");
    scanf("%s", s1.name);

    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("주소 입력:");
    fgets(s1.adress, sizeof(s1.adress), stdin);

    printf("학번:%d\n", s1.snum);
    printf("이름:%s\n", s1.name);
    printf("주소:%s\n", s1.adress);

    return 0;
}
