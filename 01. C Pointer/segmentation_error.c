#include <stdio.h>

int *create_an_integer(int default_value) {
    int var = default_value; // var은 지역변수
    return &var; // 지역변수의 주소를 리턴하는 것이 의미가 있을까?
}

int main() {
    int *ptr = NULL;
    ptr = create_an_integer(10); // dangling pointer
    printf("%d\n", *ptr); // segmentation falut
    return 0;
}