// **********************************************
// 제 목 : 교재 15장 1번 : 배열의 홀수와 짝수 구별하여 출력하기(함수)
// 날 짜 : 2026년 9월 29일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void Ary1(int* arr, int *arr1, int len);
void Ary2(int* arr, int *arr2, int len);

int main(void){
	int arr[10], arr1[10], arr2[10];

	for (int i = 0; i < 10; i++) {
		printf("배열 입력:");
		scanf("%d", &arr[i]);
	}

	Ary1(arr, arr1, 10);
	Ary2(arr, arr2, 10);

	return 0;
}

void Ary1(int* arr, int* arr1, int len) {
	int n1 = 0;

	for (int i = 0; i < len; i++) {
		if (arr[i] % 2 == 0) {
			arr1[n1] = arr[i];
			n1++;
		}
	}

	printf("짝수 배열 출력:");
	for (int j = 0; j < n1; j++) {
		printf("%d ", arr1[j]);
	}
	printf("\n");
}

void Ary2(int* arr, int* arr2, int len) {
	int n2 = 0;

	for (int i = 0; i < len; i++) {
		if (arr[i] % 2 != 0) {
			arr2[n2] = arr[i];
			n2++;
		}
	}

	printf("홀수 배열 출력:");
	for (int j = 0; j < n2; j++) {
		printf("%d ", arr2[j]);
	}
	printf("\n");
}
