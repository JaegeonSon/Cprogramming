// **********************************************
// 제 목 : 교재 15장 4번 : 문자열 입력 후 회문 판별
// 날 짜 : 2026년 9월 29일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int Check(char* str, int len);

int main(void) {
	char str[100];
	printf("문자열 입력:");
	scanf("%s", str);

	int len = strlen(str);

	if (Check(str, len) == 0) {
		printf("회문입니다.");
	}

	else {
		printf("회문이 아닙니다.");
	}

	return 0;
}

int Check(char* str, int len) {
	int res = 0;

	for (int i = 0; i < len; i++) {
		if (str[i] != str[len - i - 1]) {
			res = 1;
		}
	}

	return res;
}
