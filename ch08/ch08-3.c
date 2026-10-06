// **********************************************
// 제 목 : 실습과제3 : 이중 포인터를 활용한 문자열 배열 출력 코드
// 날 짜 : 2026년 10월 06일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void prn_str(char** dptr, int count);

int main(void)
{
    char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };
    int count;

    count = sizeof(ptrarr) / sizeof(ptrarr[0]);

    prn_str(ptrarr, count);

    return 0;
}

void prn_str(char** dptr, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", dptr[i]);
    }
}
