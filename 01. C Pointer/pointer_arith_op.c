#include <stdio.h>

int main() {
    int var = 1;

    int* int_ptr = NULL; // 포인터를 널로 초기화
    int_ptr = &var;

    char* char_ptr = NULL;
    char_ptr = (char*)&var; // 포인터 형변환

    printf("Before arithmetic: int_ptr: %u, char_ptr: %u\n",
            (unsigned int)int_ptr, (unsigned int)char_ptr);

    int_ptr++;    // 일반적으로 int의 경우 4바이트 산술연산 간격
    char_ptr++;   // 일반적으로 char의 경우 1바이트 산술연산 간격

    printf("After arithmetic: int_ptr: %u, char_ptr: %u\n",
            (unsigned int)int_ptr, (unsigned int)char_ptr);
            
    return 0;
}
