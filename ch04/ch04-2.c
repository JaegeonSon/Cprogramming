#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("문자열을 입력하시오:");
    scanf("%99s", str);

    while (str[i] != '\0')
    {
        printf("%d번째문자 %c\n", i + 1, str[i]);
        i++;
    }

    return 0;
}
