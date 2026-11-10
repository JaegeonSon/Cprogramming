// **********************************************
// 제 목 : 이름 및 점수 입력 후 사전순 첫 번째 학생 찾기(typedef 사용)
// 날 짜 : 2026년 11월 10일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

typedef struct Person {
	char name[10];
	int score;
} Per;

void get_data(Per* p);
int get_first(Per* p);

int main() {
	Per p[3];

	get_data(p);

	printf("사전순 첫 번째 학생의 이름은 %s, 점수는 %d\n", p[get_first(p)].name, p[get_first(p)].score);

	return 0;
}

void get_data(Per* p) {
	for (int i = 0; i < 3; i++) {
		printf("이름 입력:");
		scanf("%s", (p + i)->name);
		printf("점수 입력:");
		scanf("%d", &(p + i)->score);
	}
}

int get_first(Per* p) {
	int firstnum = 0;

	for (int i = 1; i < 3; i++) {
		if (strcmp((p + firstnum)->name, (p + i)->name) > 0) {
			firstnum = i;
		}
	}

	return firstnum;
}
