// **********************************************
// 제 목 : my_strcpy 함수를 이용한 문자열 복사
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600099 손재건
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void my_strcpy(char dest[], char src[]);

int main(void)
{
    char str1[20] = "1234567890";
    char str2[20];

    my_strcpy(str2, str1);

    puts(str2);

    return 0;
}

void my_strcpy(char dest[], char src[])
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}
