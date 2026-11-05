// **********************************************
// 제 목 : 구조체 배열로 입력받은 데이터 최댓값 구하기
// 날 짜 : 2026년 11월 05일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct Std {
	char name[10];
	int score;
};

int main() {
	struct Std stds[3];
	int max = 0;

	for (int i = 0; i < 3; i++) {
		printf("이름 입력:");
		scanf("%s", stds[i].name);
		printf("점수 입력:");
		scanf("%d", &stds[i].score);
	}

	for (int i = 0; i < 2; i++) {
		if (stds[i].score < stds[i + 1].score) {
			max = i + 1;
		}
	}
	
	printf("최댓값 취득 학생은 %s이고 점수는 %d점입니다.", stds[max].name, stds[max].score);

	return 0;
}
