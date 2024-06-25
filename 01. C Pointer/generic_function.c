#include <stdio.h>

void print_bytes(void *data, size_t length) {
    char delim = ' ';
    unsigned char *ptr = data; // 묵시적 형 변환
    size_t i = 0;

    for (i = 0; i < length; i++) {
        printf("%c 0x%x", delim, *ptr);
        delim = ',';
        ptr++;
    }
    printf("\n");
}

int main() {
    int a = 9;
    char b = 'a';

    print_bytes(&a, sizeof(int));
    print_bytes(&b, sizeof(char));

    return 0;
}
