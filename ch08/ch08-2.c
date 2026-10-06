// **********************************************
// 제 목 : 실습과제2 : 이중 포인터를 활용한 최댓값 추출 코드
// 날 짜 : 2026년 10월 06일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int get_max(int** dptr, int count);

int main(void)
{
    int num1 = 50, num2 = 20, num3 = 30;
    int* ptrarr[3] = { &num1, &num2, &num3 };
    int max;

    max = get_max(ptrarr, 3);

    printf("최댓값:%d\n", max);

    return 0;
}

int get_max(int** dptr, int count)
{
    int max = *(dptr[0]);

    for (int i = 1; i < count; i++)
    {
        if (max < *(dptr[i]))
        {
            max = *(dptr[i]);
        }
    }

    return max;
}
