# 실습과제1

```c
double num = 6.28;
double* ptr = &num;
double** dptr = &ptr;
```

메모리 주소가 다음과 같이 할당되어 있다고 가정한다.

- `num`의 주소: 100
- `ptr`의 주소: 300
- `dptr`의 주소: 500

| 수식 | 결과값 | 결과값의 자료형 |
| :---: | :---: | :---: |
| `ptr` | 100 | `double*` |
| `dptr` | 300 | `double**` |
| `&ptr` | 300 | `double**` |
| `&dptr` | 500 | `double***` |
| `*ptr` | 6.28 | `double` |
| `*dptr` | 100 | `double*` |
| `**dptr` | 6.28 | `double` |

# 실습과제 2

## 코드 줄별 설명 — [ch08-2.c](ch08-2.c)

행 번호는 원본 C 파일 기준이다. 빈 줄과 제목·작성일·작성자 주석은 실행에 영향을 주지 않는 정보이므로 생략한다.

```c
#pragma warning(disable:6031)
```
- **7행**: Visual Studio에서 함수 반환값을 확인하지 않았다는 C6031 경고를 억제하는 지시문

```c
#define _CRT_SECURE_NO_WARNINGS
```
- **8행**: Visual Studio의 CRT에서 scanf 등 일부 함수에 대한 보안 관련 사용 경고를 억제하는 매크로 정의; 입력 검사를 대신하지는 않음

```c
#include <stdio.h>
```
- **9행**: 표준 입출력 함수와 stdin, stdout, EOF 등의 선언을 사용하기 위한 헤더 포함

```c
int get_max(int** dptr, int count);
```
- **11행**: 정수형 이중 포인터와 요소 개수를 받아 최댓값을 반환하는 get_max 함수의 원형 선언

```c
int main(void)
```
- **13행**: 매개변수 없이 시작하여 정수형 종료 상태를 반환하는 main 함수 정의

```c
{
```
- **14행**: 바로 앞 함수·반복문·조건문의 코드 블록 시작

```c
int num1 = 50, num2 = 20, num3 = 30;
```
- **15행**: 비교할 정수 num1, num2, num3를 각각 50, 20, 30으로 초기화

```c
int* ptrarr[3] = { &num1, &num2, &num3 };
```
- **16행**: 세 정수의 주소를 원소로 갖는 정수형 포인터 배열 ptrarr 선언

```c
int max;
```
- **17행**: 반환된 최댓값을 저장할 정수형 변수 max 선언

```c
max = get_max(ptrarr, 3);
```
- **19행**: ptrarr의 첫 요소 주소(int**)와 개수 3을 전달하고 반환값을 max에 저장

```c
printf("최댓값:%d\n", max);
```
- **21행**: max에 저장된 최댓값 50을 정수 형식으로 출력

```c
return 0;
```
- **23행**: 정상 종료 상태 0을 반환하고 main 함수 종료

```c
}
```
- **24행**: 현재 코드 블록 종료

```c
int get_max(int** dptr, int count)
```
- **26행**: 포인터 배열의 첫 요소 주소 dptr과 요소 개수 count를 받는 get_max 함수 정의

```c
{
```
- **27행**: 바로 앞 함수·반복문·조건문의 코드 블록 시작

```c
int max = *(dptr[0]);
```
- **28행**: dptr[0]에 저장된 정수의 주소를 역참조하여 첫 번째 값 50을 초기 최댓값으로 저장; count는 1 이상이어야 함

```c
for (int i = 1; i < count; i++)
```
- **30행**: 두 번째 포인터부터 마지막 포인터까지 인덱스 i를 증가시키며 비교

```c
{
```
- **31행**: 바로 앞 함수·반복문·조건문의 코드 블록 시작

```c
if (max < *(dptr[i]))
```
- **32행**: dptr[i]가 가리키는 정수가 현재 최댓값보다 큰지 확인

```c
{
```
- **33행**: 바로 앞 함수·반복문·조건문의 코드 블록 시작

```c
max = *(dptr[i]);
```
- **34행**: 더 큰 정수를 발견하면 해당 값을 max에 저장

```c
}
```
- **35행**: 현재 코드 블록 종료

```c
}
```
- **36행**: 현재 코드 블록 종료

```c
return max;
```
- **38행**: 모든 포인터가 가리키는 정수 중 최댓값을 호출한 곳에 반환

```c
}
```
- **39행**: 현재 코드 블록 종료

## 실행결과
<img width="396" height="82" alt="image" src="https://github.com/user-attachments/assets/1db55b0e-71bc-40c2-b1a4-9026abc56de1" />

# 실습과제 3

## 코드 줄별 설명 — [ch08-3.c](ch08-3.c)

행 번호는 원본 C 파일 기준이다. 빈 줄과 제목·작성일·작성자 주석은 실행에 영향을 주지 않는 정보이므로 생략한다.

```c
#pragma warning(disable:6031)
```
- **7행**: Visual Studio에서 함수 반환값을 확인하지 않았다는 C6031 경고를 억제하는 지시문

```c
#define _CRT_SECURE_NO_WARNINGS
```
- **8행**: Visual Studio의 CRT에서 scanf 등 일부 함수에 대한 보안 관련 사용 경고를 억제하는 매크로 정의; 입력 검사를 대신하지는 않음

```c
#include <stdio.h>
```
- **9행**: 표준 입출력 함수와 stdin, stdout, EOF 등의 선언을 사용하기 위한 헤더 포함

```c
void prn_str(char** dptr, int count);
```
- **11행**: 문자형 이중 포인터와 문자열 개수를 받으며 반환값이 없는 prn_str 함수의 원형 선언

```c
int main(void)
```
- **13행**: 매개변수 없이 시작하여 정수형 종료 상태를 반환하는 main 함수 정의

```c
{
```
- **14행**: 바로 앞 함수·반복문·조건문의 코드 블록 시작

```c
char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };
```
- **15행**: 네 문자열 리터럴의 첫 문자 주소를 저장하는 포인터 배열 선언; 리터럴의 내용은 수정하면 안 됨

```c
int count;
```
- **16행**: 문자열 개수를 저장할 정수형 변수 count 선언

```c
count = sizeof(ptrarr) / sizeof(ptrarr[0]);
```
- **18행**: 포인터 배열 전체 크기를 포인터 한 요소의 크기로 나누어 요소 개수 4를 계산

```c
prn_str(ptrarr, count);
```
- **20행**: 포인터 배열의 첫 요소 주소(char**)와 문자열 개수를 prn_str에 전달

```c
return 0;
```
- **22행**: 정상 종료 상태 0을 반환하고 main 함수 종료

```c
}
```
- **23행**: 현재 코드 블록 종료

```c
void prn_str(char** dptr, int count)
```
- **25행**: 문자열 포인터 배열과 요소 개수를 받는 prn_str 함수 정의

```c
{
```
- **26행**: 바로 앞 함수·반복문·조건문의 코드 블록 시작

```c
for (int i = 0; i < count; i++)
```
- **27행**: 인덱스 i를 0부터 count - 1까지 증가시키며 모든 문자열을 순회

```c
{
```
- **28행**: 바로 앞 함수·반복문·조건문의 코드 블록 시작

```c
printf("%s\n", dptr[i]);
```
- **29행**: dptr[i]가 가리키는 문자열을 널문자 전까지 출력하고 줄바꿈

```c
}
```
- **30행**: 현재 코드 블록 종료

```c
}
```
- **31행**: 현재 코드 블록 종료

## 실행결과
<img width="367" height="152" alt="image" src="https://github.com/user-attachments/assets/abbf4c27-75bf-430a-8700-9131083ada05" />
