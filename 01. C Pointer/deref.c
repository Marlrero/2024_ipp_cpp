#include <stdio.h> // NULL 정의 (사실 stddef.h에 있음)

int main() {
    /* 포인터 역참조 예시 1 */
//    int x = 8;
//    int *ptr = &x; // ptr을 x의 주소로 초기화 - x 변수 가리킴

//    *ptr = 10; // ptr이 가리키는 메모리 값을 10으로 변경

    /* 포인터 역참조 예시 2 */
    int *ptr1, *ptr2, x, y;

    x = 8;
    ptr2 = &x;  // ptr2에는 x의 주소 할당
    ptr1 = NULL;

    *ptr2 = 10; // ptr2가 가리키는 메모리 값을 10으로 변경
    y = *ptr2 + 3; // y는 ptr2가 가리키는 메모리 값과 3을 더한 것이 할당

    ptr1 = ptr2; // ptr1은 ptr2에 저장된 주소 값 (둘 다 x 가리킴)

    *ptr1 = 100;

    ptr1 = &y; // ptr1의 값을 변경하여 가리키는 대상 변경
    *ptr1 = 80;


    return 0;
}