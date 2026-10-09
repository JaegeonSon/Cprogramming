// **********************************************
// 제 목 : 함수 포인터를 이용한 사칙연산 계산기
// 날 짜 : 2026년 10월 09일
// 작성자 : 2600099 손재건
// **********************************************

#pragma warning(disable:6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double add(int a, int b);
double subtract(int a, int b);
double multiply(int a, int b);
double divide(int a, int b);
double calculate(int a, int b, double (*operation)(int, int));

int main(void) {
    int choice, num1, num2;
    double (*operation)(int, int) = NULL;

    printf("연산을 선택하시오(1:덧셈,2:뺄셈,3:곱셈,4:나눗셈) : ");
    if (scanf("%d", &choice) != 1) return 1;

    switch (choice) {
    case 1: operation = add; break;
    case 2: operation = subtract; break;
    case 3: operation = multiply; break;
    case 4: operation = divide; break;
    default:
        printf("잘못된 연산 선택입니다.\n");
        return 1;
    }

    printf("두개의 정수를 입력하시오 : ");
    if (scanf("%d %d", &num1, &num2) != 2) return 1;

    if (choice == 4 && num2 == 0) {
        printf("0으로 나눌 수 없습니다.\n");
        return 1;
    }

    printf("결과값: %g\n", calculate(num1, num2, operation));

    return 0;
}

double calculate(int a, int b, double (*operation)(int, int)) {
    return operation(a, b);
}

double add(int a, int b) {
    return (double)a + b;
}

double subtract(int a, int b) {
    return (double)a - b;
}

double multiply(int a, int b) {
    return (double)a * b;
}

double divide(int a, int b) {
    return (double)a / b;
}
