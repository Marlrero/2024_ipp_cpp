#include <stdio.h>

int max(int n1, int n2); /* 함수 원형(prototype) */
int change(int amt);
int g_x; /* 전역변수(global variable): 함수 외부 선언 */

int main() {
    int x, result; /* 지역변수(local variable): 함수 내부 선언 */

    printf("Enter a value: ");
    scanf("%d", &x);
    g_x = 10; /* 전역변수는 모든 함수에서 접근 가능 */

    result = max(g_x, x);
    printf("%d is the largest of %d and %d\n", result, g_x, x);

    result = change(10);
    printf("g_x's value was %d and now is %d\n", result, g_x);

    return 0;
}

int max(int n1, int n2) { /* 2개의 매개변수(parameter) */
    int val; /* 지역변수 */

    val = n1;
    if ( n2 > n1 ) {
        val = n2;
    }

    return val;
}
int change(int amt) {
    int val;

    val = g_x; /* 전역변수는 모든 함수에서 접근 가능 */
    g_x += amt;

    return val;
}