// **********************************************
// 제 목 : 문자열의 단어 수 세기
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void)
{
    char str[100];
    int i, count = 0, check = 0;

    printf("문자열입력: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            check = 0;
        }
        else if (check == 0)
        {
            count++;
            check = 1;
        }
    }

    printf("단어수 : %d\n", count);

    return 0;
}
