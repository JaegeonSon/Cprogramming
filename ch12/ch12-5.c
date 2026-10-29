// **********************************************
// 제 목 : 문자열의 사전순 최대값과 최소값 구하기
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600099 손재건
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

int main(void)
{
    char words[5][100];
    int first = 0;
    int last = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("문자열 입력 : ");
        scanf("%s", words[i]);
    }

    for (i = 1; i < 5; i++)
    {
        if (strcmp(words[i], words[first]) < 0)
        {
            first = i;
        }

        if (strcmp(words[i], words[last]) > 0)
        {
            last = i;
        }
    }

    printf("제일앞 : %s\n", words[first]);
    printf("제일뒤 : %s\n", words[last]);

    return 0;
}
