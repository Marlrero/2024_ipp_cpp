#include <stdio.h>

typedef int* Array_1D; // int* 타입을 일차원 배열 타입으로 명시

typedef struct A {
    char name[10];
    int age;
} Student; // 구조체 타입 자체를 명시

typedef int bool_t; // int를 통해 boolean type으로 명시
typedef bool_t (*less_than_func_t)(int, int); // 함수포인터 타입 명시

bool_t less_than(int a, int b) {
    return a < b ? 1 : 0;
}

bool_t less_than_modular(int a, int b) {
    return (a % 5) < (b % 5) ? 1 : 0;
}

int main() {
    Student s = {"Taejun", 50}; // 원래는 struct Student 형식으로 번거롭게 써야 함
    less_than_func_t ptr = NULL;
    bool_t result;

    printf("Student: %s %d\n", s.name, s.age);

    ptr = &less_than;
    result = ptr(3, 7);

    printf("%d\n", result);

    ptr = &less_than_modular;
    result = ptr(3, 7);
    printf("%d\n", result);

    return 0;
}