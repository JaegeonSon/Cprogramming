// **********************************************
// 제 목 : 구조체 값 swap 알고리즘으로 상호 교환하기(typedef 사용)
// 날 짜 : 2026년 11월 10일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct position {
	int xpos, ypos;
} Point;

void swap_struct(Point* pos1, Point* pos2, Point* temp);

int main() {
	Point pos1 = { 1, 2 };
	Point pos2 = { 3, 4 };
	Point temp = { 0,0 };

	printf("pos1: [%d, %d] , pos2 : [%d, %d] \n", pos1.xpos, pos1.ypos, 
		pos2.xpos, pos2.ypos);

	swap_struct(&pos1, &pos2, &temp);

	printf("pos1: [%d, %d] , pos2 : [%d, %d] \n", pos1.xpos, pos1.ypos, 
		pos2.xpos, pos2.ypos);

	return 0;
}

void swap_struct(Point* pos1, Point* pos2, Point* temp) {
	temp->xpos = pos1->xpos;
	temp->ypos = pos1->ypos;

	pos1->xpos = pos2->xpos;
	pos1->ypos = pos2->ypos;

	pos2->xpos = temp->xpos;
	pos2->ypos = temp->ypos;
}
