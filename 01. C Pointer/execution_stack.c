#include <stdio.h>

// function prototype
int max(int x, int y);

int main() {
    int x, y, result;

    printf("input: ");
    scanf("%d %d", &x, &y);

    result = max(x, y);
    printf("%d \n", result);

    return 0;
}

// function definition
int max(int x, int y) {
    return x > y ? x : y;
}
