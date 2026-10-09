// **********************************************
// 제 목 : 도전과제 : 20-3번
// 날 짜 : 2026년 10월 09일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf(" 난수 출력: %d \n", rand() % 100);
	}

	return 0;
}
