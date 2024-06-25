#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0]; // or arr

    for (;ptr <= &arr[SIZE - 1]; ptr++) {
        printf("%d\n", *ptr);
    }

    return 0;
}