// **********************************************
// 제 목 : 엔터키를 널 문자로 변경
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char str[20];
    int i;

    printf("문자열입력: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    printf("%s", str);

    return 0;
}
