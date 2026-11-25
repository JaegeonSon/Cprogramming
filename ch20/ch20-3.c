#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

#define PI 3.1415

int main() {
    double radius, area;

    printf("반지름을 입력하세요: ");
    if (scanf("%lf", &radius) != 1)
        return 1;

    area = PI * radius * radius;

    printf("원의 넓이: %.2f\n", area);

    return 0;
}
