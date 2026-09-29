#pragma warning(disable:6031) 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void get_data(int* arr);

int main(void)
{
	int i, data[5];

	get_data(data);

	for (i = 0; i < 5; i++)
		printf("%d번째 data : %d\n", i + 1, data[i]);
	return 0;
}

void get_data(int* arr) {
	for (int i = 0; i < 5; i++) {
		printf("배열 입력:");
		scanf("%d", &*(arr + i));
	}
}
