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
