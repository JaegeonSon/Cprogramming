// **********************************************
// 제 목 : 실습과제3 : 반복문과 다차원 배열을 활용한 3 by 3 행렬의 최댓값 위치 파악 코드
// 날 짜 : 2026년 10월 01일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int arr[3][3], max=0, max_n1=0, max_n2=0;

	arr[0][0] = -5;
	arr[0][1] = 2;
	arr[0][2] = 35;
	arr[1][0] = -20;
	arr[1][1] = 5;
	arr[1][2] = 100;
	arr[2][0] = -75;
	arr[2][1] = 5;
	arr[2][2] = -25;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0 && j == 0) {
				max = arr[i][j];
				max_n1 = i+1;
				max_n2 = j+1;
			}

			if (max < arr[i][j]) {
				max = arr[i][j];
				max_n1 = i+1;
				max_n2 = j+1;
			}
		}
	}

	printf("최댓값은 %d\n", max);
	printf("위치는 %d행 %d열\n", max_n1, max_n2);

	return 0;
}
