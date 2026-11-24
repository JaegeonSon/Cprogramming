// **********************************************
// 제 목 : 텍스트 파일과 바이너리 파일의 크기 계산
// 날 짜 : 2026년 11월 24일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
    FILE* fp1;
    FILE* fp2;
    int ch;
    int size1 = 0, size2 = 0;

    fp1 = fopen("a.txt", "rb");

    if (fp1 == NULL) {
        printf("a.txt 파일 열기 실패!\n");
        return -1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        size1++;
    }

    fclose(fp1);

    fp2 = fopen("b.bin", "rb");

    if (fp2 == NULL) {
        printf("b.bin 파일 열기 실패!\n");
        return -1;
    }

    while ((ch = fgetc(fp2)) != EOF) {
        size2++;
    }

    fclose(fp2);

    printf("a.txt의 파일크기: %d바이트\n", size1);
    printf("b.bin의 파일크기: %d바이트\n", size2);

    return 0;
}
