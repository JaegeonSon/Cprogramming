// **********************************************
// 제 목 : 텍스트 파일을 바이너리 파일로 변환
// 날 짜 : 2026년 11월 24일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
    int num[10];
    FILE* fp1;
    FILE* fp2;

    fp1 = fopen("a.txt", "rt");

    if (fp1 == NULL) {
        printf("파일 열기 실패!\n");
        return -1;
    }

    for (int i = 0; i < 10; i++) {
        if (fscanf(fp1, "%d", &num[i]) != 1) {
            printf("데이터 읽기 실패!\n");
            fclose(fp1);
            return -1;
        }
    }

    fclose(fp1);

    fp2 = fopen("b.bin", "wb");

    if (fp2 == NULL) {
        printf("파일 열기 실패!\n");
        return -1;
    }

    if (fwrite(num, sizeof(int), 10, fp2) != 10) {
        printf("데이터 저장 실패!\n");
        fclose(fp2);
        return -1;
    }

    fclose(fp2);

    printf("파일 변환 완료\n");

    return 0;
}
