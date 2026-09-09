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
## 실행결과
<img width="397" height="92" alt="image" src="https://github.com/user-attachments/assets/1c335ff7-bfa7-49c3-80e4-b75f37bc0151" />

# 실습과제 5
## 문제
정수형 변수 num1과 num2를 선언하여 각각 30과 50으로 초기화하고, 포인터 변수 ptr1과 ptr2가 각각 num1과 num2를 가리키도록 하시오.

포인터를 이용하여 num1의 값을 20 증가시키고, num2의 값을 15 감소시키시오.

그 후 ptr1과 ptr2가 가리키는 대상을 서로 바꾸고, ptr1이 가리키는 값에는 5를 더하고 ptr2가 가리키는 값에는 2를 곱하시오.

마지막으로 num1, num2, ptr1이 가리키는 값, ptr2가 가리키는 값을 각각 출력하시오.

## 실행결과
<img width="307" height="126" alt="image" src="https://github.com/user-attachments/assets/01eedcff-8abd-469f-a412-a71a6a554276" />

