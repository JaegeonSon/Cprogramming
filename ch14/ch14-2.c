// **********************************************
// 제 목 : 구조체 배열로 입력받은 데이터 중 사전 상 앞에 나오는 단어 구하기
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
	int res=0;

	for (int i = 0; i < 3; i++) {
		printf("이름 입력:");
		scanf("%s", stds[i].name);
		printf("점수 입력:");
		scanf("%d", &stds[i].score);
	}

	for (int i = 1; i < 3; i++) {
		if (strcmp(stds[i].name, stds[res].name)<0) {
			res = i;
		}
	}

	printf("이름:%s, 점수:%d\n", stds[res].name, stds[res].score);

	return 0;
}
