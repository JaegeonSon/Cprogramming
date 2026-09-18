// **********************************************
// 제 목 : 대문자와 소문자를 각각 상호 변경하여 출력하기
// 날 짜 : 2026년 9월 18일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("문자열을 입력하시오:");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }

        i++;
    }

    printf("변환결과 : %s\n", str);

    return 0;
}
