#include <stdio.h> // NULL 정의 (사실 stddef.h에 있음)

int main() {
    int *ptr, x, y;

    ptr = 20; // 주소 20을 가리킴 ?
    ptr = &x;
    *ptr = 20; // ptr이 가리키는 값을 20으로 변경

    ptr = NULL;
    *ptr = 6; // segfault error

    ptr = 20;
    *ptr = 6; // segfault error (20은 유효 주소 아님)

    ptr = x;
    *ptr = 6; // 메모리 값을 6으로 설정하나, 
              // 유효 주소가 아닌 곳에 접근할 수 있음
    
    // 아래는 올바른 코드 (프로그래머가 원하는 코드로 추측)
    ptr = &x;
    *ptr = 6;

    // 항상 포인터 변수는 NULL로 초기화하고,
    ptr = NULL;
    if (ptr != NULL) { // NULL이 아닐 때 역참조하는 습관
        *ptr = 6;
    }

    return 0;
}