#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int get_max(int* array, int n);

int main(void)
{
	int grade[5];
	int i, max;
	for (i = 0; i < 5; i++)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade[i]);
	}
	max = get_max(grade, 5);

	printf("최대값은 %d입니다.\n", max);

	return 0;
}

int get_max(int* array, int n)
{
	int i, max;
	max = *array;
	for (i = 1; i < n; i++)
		if (*(array + i) > max)  max = *(array + i);

	return max;
}
