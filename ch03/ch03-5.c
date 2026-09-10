// **********************************************
// 제 목 : 포인터 덧셈연산을 이용한 배열 접근
// 날 짜 : 2026년 9월 10일
// 작성자 : 2600099 손재건
// **********************************************

#include <stdio.h>

int main(void)
{
    double arr[5];
    double *ptr = arr;
    double *temp;
    int i;

    // 포인터 덧셈연산을 이용하여 5개의 실수 입력
    printf("5개의 실수를 입력하시오.\n");

    for (i = 0; i < 5; i++)
        scanf("%lf", ptr + i);

    // 포인터 덧셈연산을 이용하여 모든 배열요소를 2씩 증가
    for (i = 0; i < 5; i++)
        *(ptr + i) += 2.0;


    // 1. 배열을 이용한 배열표현
    printf("1. arr[i] : ");

    for (i = 0; i < 5; i++)
        printf("%.2f ", arr[i]);

    printf("\n");


    // 2. 배열명을 이용한 주소표현
    printf("2. *(arr+i) : ");

    for (i = 0; i < 5; i++)
        printf("%.2f ", *(arr + i));

    printf("\n");


    // 3. 포인터 변수를 이용한 배열표현
    printf("3. ptr[i] : ");

    for (i = 0; i < 5; i++)
        printf("%.2f ", ptr[i]);

    printf("\n");


    // 4. 포인터 변수를 이용한 주소표현
    printf("4. *(ptr+i) : ");

    for (i = 0; i < 5; i++)
        printf("%.2f ", *(ptr + i));

    printf("\n");


    // 5. 증감연산자를 이용한 주소표현
    temp = ptr;

    printf("5. *temp++ : ");

    for (i = 0; i < 5; i++)
        printf("%.2f ", *(temp++));

    printf("\n");

    return 0;
}
