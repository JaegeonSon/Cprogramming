// **********************************************
// 제 목 : 이름, 학번, 주소 입력 후 출력하기(typedef 사용)
// 날 짜 : 2026년 11월 10일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct Info{
	int stnum;
	char name[10];
	char adress[50];
} In;

void get_data(In* p);
void put_data(In* p);

int main() {
	In p1;

	get_data(&p1);
	put_data(&p1);

	return 0;
}

void get_data(In* p) {
	int ch;
	printf("학번 입력:");
	scanf("%d", &p->stnum);
	printf("이름 입력:");
	scanf("%s", p->name);

	while ((ch = getchar()) != '\n' && ch != EOF);

	printf("주소 입력:");
	fgets(p->adress, sizeof(p->adress), stdin);
}

void put_data(In* p) {
	printf("\n1.학번:%d\n", p->stnum);
	printf("2.이름:%s\n", p->name);
	printf("3.주소:%s\n", p->adress);
}
