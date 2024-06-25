#include <stdio.h>

int main() {
    int var = 9;
    int *ptr = &var;
    void *gptr = ptr;

    printf("%d\n", *gptr);

    return 0;
}