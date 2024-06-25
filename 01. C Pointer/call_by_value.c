#include <stdio.h>

void func(int a) {
    a = 5;
}

int main() {
    int x = 3;
    printf("Before function call: %d\n", x);

    func(x);
    printf("After function call: %d\n", x);

    return 0;
}