# 실습과제 1
## 1. 표준 입출력 스트림에 접근하는 방법을 설명하라.

표준 입출력 스트림은 데이터를 입력받거나 출력할 때 사용하는 통로이다. stdin은 표준 입력, stdout은 표준 출력, stderr는 표준 오류를 담당한다. stdio.h에 정의된 getchar(), putchar(), fgetc(), fputc() 등의 함수를 이용해 접근할 수 있다.

## 2. 공백을 포함한 문자열을 입력받을 때 사용 가능한 함수는?
공백을 포함한 문자열을 입력받을 때는 fgets() 함수를 사용할 수 있다. 과거에는 gets() 함수도 사용했지만 안전성 문제로 현재는 사용하지 않는다.

## 3. gets 함수 사용 시 가장 큰 문제점은 무엇인가?
gets() 함수는 입력받는 문자열의 길이를 제한하지 않아 배열의 크기를 초과할 경우 버퍼 오버플로가 발생할 수 있다. 이로 인해 메모리 손상이나 프로그램 오류가 발생할 수 있다.

## 4. fgets 함수 사용 시 문제점은 무엇인가?
fgets() 함수는 엔터키('\n')까지 문자열에 저장할 수 있어 출력 시 의도하지 않은 줄바꿈이 발생할 수 있다. 또한 입력 문자열이 배열 크기를 초과하면 나머지 문자가 입력 버퍼에 남아 다음 입력에 영향을 줄 수 있다.

## 5. 널 문자('\0')와 널 포인터(NULL)의 용도를 설명하시오.
널 문자('\0')는 문자열의 끝을 표시하는 문자로, 문자열의 종료 위치를 구분하는 데 사용한다. 널 포인터(NULL)는 포인터가 유효한 객체나 함수를 가리키지 않는 상태를 나타내는 데 사용한다.

# 실습과제 2
## 실행결과
<img width="1367" height="317" alt="image" src="https://github.com/user-attachments/assets/6bc003f3-8135-42d2-b0a0-e362bdfc2ad2" />

# 실습과제 3
## 실행결과
<img width="320" height="212" alt="image" src="https://github.com/user-attachments/assets/8b9d9c37-7106-4509-8e0d-10e4cca4380d" />

# 실습과제 4
## 실행결과
<img width="297" height="90" alt="image" src="https://github.com/user-attachments/assets/0c3a9cd1-8bed-4395-bf95-b61eee8e7346" />

# 실습과제 5
## 실행결과
<img width="452" height="117" alt="image" src="https://github.com/user-attachments/assets/d1926875-d74e-4d1c-9189-564385432ca7" />
