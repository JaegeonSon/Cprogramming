// **********************************************
// 제 목 : my_strlen 함수를 이용한 문자열 길이 계산
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600099 손재건
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int my_strlen(char str[]);
void RemoveBSN(char str[]);

int main(void)
{
    char str[100];

    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);

    printf("길이: %d, 내용: %s \n", my_strlen(str), str);

    RemoveBSN(str);

    printf("길이: %d, 내용: %s \n", my_strlen(str), str);

    return 0;
}

int my_strlen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

void RemoveBSN(char str[])
{
    int len = my_strlen(str);

    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}
