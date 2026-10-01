// **********************************************
// 제 목 : 실습과제4 : 반복문과 다차원 배열을 활용한 문자열 길이 출력 코드
// 날 짜 : 2026년 10월 01일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	char str[4][10];

	for (int i = 0; i < 4; i++) {
		printf("%d번째 문자열 입력:", i+1);
		scanf("%s", &str[i][0]);
	}

	for (int i = 0; i < 4; i++) {
		int cnt = 0;
		for (int j = 0; j < 10; j++) {
			if (str[i][j] == '\0') {
				break;
			}
			cnt++;
		}
		printf("%d번째 문자열 길이 : %d\n", i + 1, cnt);
	}

	return 0;
}
