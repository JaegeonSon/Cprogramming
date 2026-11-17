// **********************************************
// 제 목 : 텍스트 파일의 내용을 줄바꿈하여 다른 파일에 저장
// 날 짜 : 2026년 11월 17일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
    int ch;
    FILE* fp1;
    FILE* fp2;

    fp1 = fopen("test.txt", "rt");

    if (fp1 == NULL) {
        printf("원본 파일 열기 실패!\n");
        return -1;
    }

    fp2 = fopen("result.txt", "wt");

    if (fp2 == NULL) {
        printf("출력 파일 열기 실패!\n");
        fclose(fp1);
        return -1;
    }

    while (1) {
        ch = fgetc(fp1);

        if (ch == EOF)
            break;

        fputc(ch, fp2);

        if (ch == '.')
            fputc('\n', fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
