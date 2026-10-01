// **********************************************
// 제 목 : 실습과제1 : 반복문과 다차원 배열을 활용한 행렬 연산 코드
// 날 짜 : 2026년 10월 01일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int arr1[2][2], arr2[2][2], arr3[2][2];

	arr1[0][0] = 2;
	arr1[0][1] = 4;
	arr1[1][0] = 5;
	arr1[1][1] = -5;

	arr2[0][0] = -2;
	arr2[0][1] = 3;
	arr2[1][0] = 0;
	arr2[1][1] = -5;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	printf("%d     %d\n", arr3[0][0], arr3[0][1]);
	printf("%d     %d\n", arr3[1][0], arr3[1][1]);

	return 0;
}
