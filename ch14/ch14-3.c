// **********************************************
// 제 목 : 구조체 배열로 입력받은 데이터 중 사전 상 앞에 나오는 단어 구하기(포인터)
// 날 짜 : 2026년 11월 05일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct Std {
	char name[10];
	int score;
};

int main() {
	struct Std stds[3];
	struct Std* s;
	s = &stds;
	int res=0;

	for (int i = 0; i < 3; i++) {
		printf("이름 입력:");
		scanf("%s", (s+i)->name);
		printf("점수 입력:");
		scanf("%d", &(s+i)->score);
	}

	for (int i = 1; i < 3; i++) {
		if (strcmp((s+i)->name, (s+res)->name) < 0) {
			res = i;
		}
	}

	printf("이름:%s, 점수:%d\n", (s+res)->name, (s + res)->score);

	return 0;
}
