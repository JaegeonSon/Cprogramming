// **********************************************
// 제 목 : 함수와 포인터를 활용한 정수부와 소수부 분리 코드
// 날 짜 : 2026년 9월 29일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void Sep(double n, int* frt, double* bck);

int main(void){
	double n, bck;
	int frt;

	printf("소수 하나 입력:");
	scanf("%lf", &n);

	Sep(n, &frt, &bck);

	printf("정수부 : %d\n", frt);
	printf("소수부 : %lf\n", bck);

	return 0;
}

void Sep(double n, int* frt, double* bck) {
	int frt1;
	double bck1;
	frt1 = (int)n;
	bck1 = n - (int)n;

	*frt = frt1;
	*bck = bck1;
}
