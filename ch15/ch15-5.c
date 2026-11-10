// **********************************************
// 제 목 : 구조체 값 swap 알고리즘으로 상호 교환하기(typedef 사용)
// 날 짜 : 2026년 11월 10일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct point {
	int xpos, ypos;
} P;

void SwapPoint(P* pos1, P* pos2, P* temp);

int main() {
	P pos1 = { 2, 4 };
	P pos2 = { 5, 7 };
	P temp = { 0,0 };

	printf("교환 전 pos1:[%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("교환 전 pos2:[%d, %d]\n", pos2.xpos, pos2.ypos);

	SwapPoint(&pos1, &pos2, &temp);

	printf("교환 후 pos1:[%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("교환 후 pos2:[%d, %d]\n", pos2.xpos, pos2.ypos);

	return 0;
}

void SwapPoint(P* pos1, P* pos2, P* temp) {
	temp->xpos = pos1->xpos;
	temp->ypos = pos1->ypos;

	pos1->xpos = pos2->xpos;
	pos1->ypos = pos2->ypos;

	pos2->xpos = temp->xpos;
	pos2->ypos = temp->ypos;
}
