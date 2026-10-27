// **********************************************
// 제 목 : 문자열 입력받고 출력하기
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600099 손재건
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char name[50], address[100], car[50];

    fputs("이름: ", stdout);
    fgets(name, sizeof(name), stdin);

    fputs("주소: ", stdout);
    fgets(address, sizeof(address), stdin);

    fputs("자동차번호: ", stdout);
    fgets(car, sizeof(car), stdin);

    puts("<결과출력>");

    fputs("이름:", stdout);
    fputs(name, stdout);

    fputs("주소:", stdout);
    fputs(address, stdout);

    fputs("자동차번호: ", stdout);
    fputs(car, stdout);

    return 0;
}
