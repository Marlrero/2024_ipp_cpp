#include <stdio.h>
#include <stdlib.h> // malloc, free

int main() {
    int *p = malloc(sizeof(int)); // int 값을 저장할 힙 메모리 할당

    if (p != NULL) { // 힙 메모리 할당 시 에러가 나면 NULL
        *p = 6; // int 값 6을 저장
    }

    printf("%d\n", *p);

    free(p);  // 힙 메모리 해제
    p = NULL; // 항상 NULL로 초기화하는 습관

    return 0;
}