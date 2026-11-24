// **********************************************
// 제 목 : 바이너리 파일의 정수 데이터 출력
// 날 짜 : 2026년 11월 24일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
    int num[10];
    FILE* fp;

    fp = fopen("b.bin", "rb");

    if (fp == NULL) {
        printf("파일 열기 실패!\n");
        return -1;
    }

    if (fread(num, sizeof(int), 10, fp) != 10) {
        printf("데이터 읽기 실패!\n");
        fclose(fp);
        return -1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }

    fclose(fp);

    return 0;
}
