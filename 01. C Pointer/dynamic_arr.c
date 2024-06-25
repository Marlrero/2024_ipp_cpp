#include <stdio.h>
#include <stdlib.h> // malloc, free, exit

int main() {
    int arr1[10]; // 10개짜리 정적 배열
    int *arr2 = (int *)malloc(sizeof(int) * 10); // 10개짜리 동적 배열

    char str1[10]; // 10개짜리 정적 문자열
    char *str2 = (char *)malloc(sizeof(char) * 10); // 10개짜리 동적 문자열

    if (arr2 == NULL || str2 == NULL) {
        printf("Error! malloc failed\n");
        exit(1);
    }

    // 문자열의 경우 널 문자를 넣어야 문자열이 됨
    str1[9] = '\0';     // 인덱싱
    *(str2 + 9) = '\0'; // 포인터 역참조

    free(arr2); arr2 = NULL; // 동적 할당 해제
    free(str2); str2 = NULL; // 동적 할당 해제

    return 0;
}