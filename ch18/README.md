# 실습과제1
## 실행결과
<img width="398" height="115" alt="image" src="https://github.com/user-attachments/assets/015bb601-2965-4cee-b263-8f4016cb29b7" />
<img width="327" height="166" alt="image" src="https://github.com/user-attachments/assets/187c313b-aa50-4f12-b696-f3417775a378" />

# 실습과제2
## 실행결과
<img width="623" height="58" alt="image" src="https://github.com/user-attachments/assets/edef34bc-4157-47cb-9ec7-ab838e2317fb" />
<img width="293" height="184" alt="image" src="https://github.com/user-attachments/assets/d321feb5-7924-418b-a63b-0f43aa918b9e" />
<img width="325" height="157" alt="image" src="https://github.com/user-attachments/assets/5dd2d23c-a8ab-4faf-b98d-cacfda781801" />

# 실습과제3
## 실행결과
<img width="612" height="66" alt="image" src="https://github.com/user-attachments/assets/f2d542f3-ca0a-42c4-8281-713015174d8a" />
<img width="293" height="184" alt="image" src="https://github.com/user-attachments/assets/d321feb5-7924-418b-a63b-0f43aa918b9e" />
<img width="312" height="183" alt="image" src="https://github.com/user-attachments/assets/6e0d6dfe-a82a-4647-9f40-afef6f8b52d5" />

# 실습과제4
## 문제: 예제4-1의 실행 결과가 비정상적으로 출력되는 이유를 설명하시오.
예제4-1에서 실행 결과가 비정상적으로 출력되는 이유는 fscanf 함수의 서식 지정자 "%s%c%d"에서 %c가 공백 문자도 입력받기 때문이다.

1. %s는 문자열을 입력받을 때 공백을 만나면 입력을 종료하지만, 해당 공백은 입력 버퍼에 남아 있다.

2. %c는 공백 문자도 일반 문자로 취급하기 때문에 앞서 남아 있던 공백을 성별 변수에 저장한다.

3. 이후 %d는 정수를 입력받아야 하지만, 입력 버퍼에 남아 있는 성별 문자(M 또는 F)를 만나 정수 변환에 실패한다.

4. 이로 인해 각 변수에 입력되는 데이터의 순서가 어긋나고, 초기화되지 않은 변수의 값이 출력되는 등 비정상적인 결과가 발생한다.

## 해결 방법
fscanf 함수의 서식 지정자에서 %c 앞에 공백을 추가하면 된다.

- 기존 코드: fscanf(fp, "%s%c%d", name, &gender, &age);
- 수정 코드: fscanf(fp, "%s %c %d", name, &gender, &age);

%c 앞에 공백을 추가하면 입력 과정에서 공백, 탭, 줄바꿈 등의 공백 문자를 건너뛰고 실제 성별 문자를 읽게 된다.

따라서 이름, 성별, 나이를 각각 올바른 변수에 저장하여 정상적으로 출력할 수 있다.
