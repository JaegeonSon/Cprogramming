// **********************************************
// 제 목 : my_strcat 함수를 이용한 문자열 연결
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600099 손재건
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void my_strcat(char dest[], char src[]);

int main(void)
{
    char str1[20] = "First~";
    char str2[20] = "Second";

    my_strcat(str1, str2);

    puts(str1);

    return 0;
}

void my_strcat(char dest[], char src[])
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}
