// **********************************************
// 제 목 : 교재 15장 3번 : 배열의 내 홀수와 짝수를 다른 위치에 저장하기
// 날 짜 : 2026년 9월 29일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int arr[10], arr1[10], hnum=0, jnum=9;
	for (int i = 0; i < 10; i++) {
		printf("배열 입력:");
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < 10; j++) {
		if (arr[j] % 2 == 0) {
			arr1[jnum] = arr[j];
			jnum--;
		}

		else {
			arr1[hnum] = arr[j];
			hnum++;
		}
	}

	printf("변경 배열 출력:");
	for (int k = 0; k < 10; k++) {
		printf("%d ", arr1[k]);
	}

	return 0;
}

