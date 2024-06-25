#include <stdio.h> // NULL 정의 (사실 stddef.h에 있음)

int main() {
    /* NULL 포인터의 사용 */
    int  *ptr = NULL; // 권장
    char *cptr = 0;   // 이렇게도 가능하긴 함

    return 0;
}