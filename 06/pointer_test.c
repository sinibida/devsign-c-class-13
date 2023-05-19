#include <stdio.h>

int main() {
    int a = 10;
int* a_ptr = &a;
printf("%d\n", a);
printf("%p\n", a_ptr);
// %p: 포인터 주소 출력
// (자주 사용되는 구문은 아닙니다.)
// 변수의 주소값은 선언 시마다 *무작위로* 정해집니다.
// 따라서, 프로그램 실행 때마다,
// 그리고 기기에 따라서 다르게 출력됩니다.
// [출력 예시]
// 10
// 0x7fff61adc7ac
}
