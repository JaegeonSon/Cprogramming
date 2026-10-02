# 실습과제 1

| 수식 | 결과값 | 결과값의 자료형 |
|---|---|---|
| `&ch` | `100` | `char *` |
| `&in` | `101` | `int *` |
| `&db` | `105` | `double *` |
| `*&ch` | `'A'` | `char` |
| `*&in` | `10` | `int` |
| `*&db` | `3.4` | `double` |

# 실습과제 2
```
#include <stdio.h>
```
- printf와 scanf 등의 표준 입출력 함수를 사용하기 위한 헤더 파일 선언

```
int main(void)
```
- 프로그램의 실행이 시작되는 main 함수 정의

```
{
```
- main 함수의 코드 블록 시작

```
int a = -100;
```
- 정수형 변수 a 선언 및 a를 정수형 상수 -100으로 초기화

```
char b = 'A';
```
- 문자형 변수 b 선언 및 b를 문자형 상수 'A'로 초기화

```
double c = 3.14;
```
- 실수형 변수 c 선언 및 c를 실수형 상수 3.14로 초기화

```
int* pa = &a;
```
- 정수형 포인터 변수 pa 선언 및 a의 주소로 초기화

```
char* pb = &b;
```
- 문자형 포인터 변수 pb 선언 및 b의 주소로 초기화

```
double* pc = &c;
```
- 실수형 포인터 변수 pc 선언 및 c의 주소로 초기화

```
printf("int형 변수 a의 값은 : %d\n", *pa);
```
- pa가 가리키는 a의 값 -100을 %d를 사용해 출력

```
printf("char형 변수 b의 값은 : %c\n", *pb);
```
- pb가 가리키는 b의 값 'A'를 %c를 사용해 출력

```
printf("double형 변수 c의 값은 : %lf\n", *pc);
```
- pc가 가리키는 c의 값 3.14를 %lf를 사용해 출력

```
return 0;
```
- 0을 반환하여 main 함수 정상 종료

```
}
```
- main 함수의 코드 블록 종료

## 실행결과
<img width="427" height="132" alt="image" src="https://github.com/user-attachments/assets/020eb63c-72fd-4a7d-bd50-8ecb7be5bd9d" />


# 실습과제 3

## 문제에서 주어진 코드

```c
#include <stdio.h>

int main(void)
{
    int* ptr = (int*)125;   // ①
    *ptr = 10;
    printf("%d\n", *ptr);

    return 0;
}
```

## 답안

1. **①번 라인에서 강제형변환이 사용된 이유**

   `125`는 단순한 정수값이므로 자료형이 `int`이다.
   하지만 `ptr`은 `int *`형 포인터 변수이므로 정수값 `125`를 주소로 사용하기 위해 `(int*)`를 이용해 `int *`형 주소로 강제형변환한 것이다.

2. **코드 실행 시 오류가 발생하는 이유**

   ```c
   *ptr = 10;
   ```

   `ptr`에는 임의로 지정한 `125번지`가 저장되어 있다. 하지만 이 주소는 프로그램이 정상적으로 사용할 수 있도록 할당받은 메모리 주소가 아니다.

   따라서 `*ptr`을 이용해 125번지에 접근하여 값을 저장하려 하면 허용되지 않은 메모리 영역에 접근하게 되어 실행 중 오류가 발생하고 프로그램이 중단된다.

# 실습과제 4
```
#include <stdio.h>
```
- printf와 scanf 등의 표준 입출력 함수를 사용하기 위한 헤더 파일 선언

```
int main(void)
```
- 프로그램의 실행이 시작되는 main 함수 정의

```
{
```
- main 함수의 코드 블록 시작

```
int a = 100, b = 200;
```
- 정수형 변수 a와 b 선언 및 각각 100과 200으로 초기화

```
int sum;
```
- 두 정수의 합을 저장할 정수형 변수 sum 선언

```
int* pa = &a;
```
- 정수형 포인터 변수 pa 선언 및 a의 주소로 초기화

```
int* pb = &b;
```
- 정수형 포인터 변수 pb 선언 및 b의 주소로 초기화

```
int* psum = &sum;
```
- 정수형 포인터 변수 psum 선언 및 sum의 주소로 초기화

```
*psum = *pa + *pb;
```
- pa와 pb가 가리키는 값 100과 200을 더해 psum이 가리키는 sum에 300 저장

```
printf("두정수의 합 : %d\n", *psum);
```
- psum이 가리키는 sum의 값 300을 %d를 사용해 출력

```
return 0;
```
- 0을 반환하여 main 함수 정상 종료

```
}
```
- main 함수의 코드 블록 종료

## 실행결과
<img width="397" height="92" alt="image" src="https://github.com/user-attachments/assets/1c335ff7-bfa7-49c3-80e4-b75f37bc0151" />

# 실습과제 5
## 문제
정수형 변수 num1과 num2를 선언하여 각각 30과 50으로 초기화하고, 포인터 변수 ptr1과 ptr2가 각각 num1과 num2를 가리키도록 하시오.

포인터를 이용하여 num1의 값을 20 증가시키고, num2의 값을 15 감소시키시오.

그 후 ptr1과 ptr2가 가리키는 대상을 서로 바꾸고, ptr1이 가리키는 값에는 5를 더하고 ptr2가 가리키는 값에는 2를 곱하시오.

마지막으로 num1, num2, ptr1이 가리키는 값, ptr2가 가리키는 값을 각각 출력하시오.

```
#include <stdio.h>
```
- printf와 scanf 등의 표준 입출력 함수를 사용하기 위한 헤더 파일 선언

```
int main(void)
```
- 프로그램의 실행이 시작되는 main 함수 정의

```
{
```
- main 함수의 코드 블록 시작

```
int num1 = 30, num2 = 50;
```
- 정수형 변수 num1과 num2 선언 및 각각 30과 50으로 초기화

```
int* ptr1 = &num1;
```
- 정수형 포인터 변수 ptr1 선언 및 num1의 주소로 초기화

```
int* ptr2 = &num2;
```
- 정수형 포인터 변수 ptr2 선언 및 num2의 주소로 초기화

```
int* temp;
```
- 포인터의 주소값을 임시로 저장할 정수형 포인터 변수 temp 선언

```
*ptr1 += 20;
```
- ptr1이 가리키는 num1의 값을 20 증가시켜 50으로 변경

```
*ptr2 -= 15;
```
- ptr2가 가리키는 num2의 값을 15 감소시켜 35로 변경

```
temp = ptr1;
```
- ptr1에 저장된 num1의 주소를 temp에 임시 저장

```
ptr1 = ptr2;
```
- ptr2에 저장된 num2의 주소를 ptr1에 대입하여 ptr1이 num2를 가리키도록 변경

```
ptr2 = temp;
```
- temp에 저장된 num1의 주소를 ptr2에 대입하여 ptr2가 num1을 가리키도록 변경

```
*ptr1 += 5;
```
- ptr1이 가리키는 num2의 값을 5 증가시켜 40으로 변경

```
*ptr2 *= 2;
```
- ptr2가 가리키는 num1의 값에 2를 곱해 100으로 변경

```
printf("num1 : %d\n", num1);
```
- num1의 최종 값 100을 %d를 사용해 출력

```
printf("num2 : %d\n", num2);
```
- num2의 최종 값 40을 %d를 사용해 출력

```
printf("ptr1이 가리키는 값 : %d\n", *ptr1);
```
- ptr1이 가리키는 num2의 값 40을 %d를 사용해 출력

```
printf("ptr2가 가리키는 값 : %d\n", *ptr2);
```
- ptr2가 가리키는 num1의 값 100을 %d를 사용해 출력

```
return 0;
```
- 0을 반환하여 main 함수 정상 종료

```
}
```
- main 함수의 코드 블록 종료

## 실행결과
<img width="307" height="126" alt="image" src="https://github.com/user-attachments/assets/01eedcff-8abd-469f-a412-a71a6a554276" />

