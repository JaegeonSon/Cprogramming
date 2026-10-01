// **********************************************
// 제 목 : 실습과제2 : 반복문과 다차원 배열을 활용한 우수점수 학생 판별코드
// 날 짜 : 2026년 10월 01일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int arr[3][3], score_s[3], max=0, num=0;

	for (int i = 0; i < 3; i++) {
		printf("%d번째 학생의 국어, 영어, 수학 성적 입력:", i+1);
		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
		score_s[i] = (arr[i][0] + arr[i][1] + arr[i][2])/3;
	}

	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			max = score_s[i];
			num = i + 1;
		}

		if (max < score_s[i]) {
			max = score_s[i];
			num = i + 1;
		}
	}

	printf("최우수 학생은 %d번 학생이고 평균 점수는 %d점이다.", num ,max);

	return 0;
}
