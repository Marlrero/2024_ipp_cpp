#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*func_ptr)(int, int) = NULL; // 함수 포인터
    int result;

    func_ptr = &sum;
    result = func_ptr(5, 4);
    printf("Sum: %d \n", result);

    result = (*func_ptr)(10, 4);
    printf("Sum: %d \n", result);

    func_ptr = &subtract;
    result = func_ptr(5, 4);
    printf("Sub: %d \n", result);

    return 0;
}