// **********************************************
// 제 목 : 입력받은 문자열을 계속 연결하는 프로그램
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600099 손재건
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

int main(void)
{
    char result[1000] = "";
    char input[100];

    while (1)
    {
        printf("문자열 입력 : ");
        if (scanf("%99s", input) != 1)
            break;

        if (strcmp(input, "quit") == 0)
            break;

        if (strlen(result) + strlen(input) + 2 > sizeof(result))
        {
            printf("문자열을 더 이상 연결할 수 없습니다.\n");
            break;
        }

        if (strlen(result) > 0)
            strcat(result, " ");

        strcat(result, input);
        printf("입력된 문자열: %s\n", result);
    }

    return 0;
}
