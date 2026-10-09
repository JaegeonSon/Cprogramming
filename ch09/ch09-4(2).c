// **********************************************
// 제 목 : 도전과제 : 20-2번
// 날 짜 : 2026년 10월 09일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

int main(void)
{
    int arr[50][50];
    int len, idx, i, j;
    int s = 0, w = -1, inc = 1, val = 0;

    printf("숫자를 입력하시오: ");
    scanf("%d", &len);
    idx = len;

    while (1)
    {
        for (i = 0; i < idx; i++)
        {
            val++;
            w = w + inc;
            arr[s][w] = val;
        }
        idx = idx - 1;

        if (val == len * len)
            break;

        for (i = 0; i < idx; i++)
        {
            val++;
            s = s + inc;
            arr[s][w] = val;
        }
        inc = inc * -1;
    }

    for (i = 0; i < len; i++)  
    {
        for (j = 0; j < len; j++)
            printf("%5d", arr[i][j]);
        printf("\n");
    }

    return 0;
}

