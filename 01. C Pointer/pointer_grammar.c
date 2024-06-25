// 포인터 자체는 C언어 문법이므로 헤더파일과 관련 없음

int main() {
    /* 포인터 변수 선언 */
    int  *ptr;  // int의 메모리 주소를 지정(ptr이 int를 가리킴)
    char *cptr; // char의 메모리 주소를 지정(ptr이 char를 가리킴)

    /* 유효 선언 */
//    int* ptr = 0;  // 선호되는 방식 1 (하나의 단위로 보이도록 쓰는 관례)
//    int * ptr = 0; // 거의 이렇게 쓰지는 않음
//    int *ptr = 0;  // 선호되는 방식 2 (변수가 포인터임을 명확하기 위해 쓰는 관례)

    /* 포인터 변수 초기화 */
    int x;
    char ch;
    
    ptr = &x;   // ptr은 x의 주소를 가져와 포인터 x에 저장
    cptr = &ch; // cptr은 ch의 주소를 가져와 포인터 ch에 저장

    /* 타입이 불일치해 유효하지 않은 포인터 초기화의 예시 */
//    cptr = &x;  // Error: cptr은 char 타입 메모리 위치를 보유할 수 있음
                // &x는 int 타입의 주소임

    return 0;
}