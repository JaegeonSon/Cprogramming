// **********************************************
// 제 목 : 주어진 문자열 중 사전에서 가장 앞에 나오는 문자열 찾기
// 날 짜 : 2026년 9월 18일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char* fruits[] = { "apple", "blueberry", "orange", "melon" };

    int i;
    int min = 0;
    int n = sizeof(fruits) / sizeof(fruits[0]);

    for (i = 1; i < n; i++)
    {
        if (fruits[i][0] < fruits[min][0])
        {
            min = i;
        }
    }

    printf("사전에서 가장 앞에 나오는 문자열: %s\n", fruits[min]);

    return 0;
}
