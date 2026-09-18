// **********************************************
// 제 목 : 두 문자열 중 사전 상에서 앞에 나오는 문자열 출력하기
// 날 짜 : 2026년 9월 18일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char str1[100];
    char str2[100];

    printf("문자열을 입력하시오:");
    scanf("%s", str1);

    printf("문자열을 입력하시오:");
    scanf("%s", str2);

    if (str1[0] < str2[0])
    {
        printf("사전에서 앞에 나오는 문자열: %s\n", str1);
    }
    else if (str1[0] > str2[0])
    {
        printf("사전에서 앞에 나오는 문자열: %s\n", str2);
    }
    else
    {
        printf("두 문자열의 첫 번째 문자가 같습니다.\n");
    }

    return 0;
}
