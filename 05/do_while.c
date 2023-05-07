#include <stdio.h>

int main() {
    char quit/*= '?'*/; // 정의 X
    // char quit = '0';

    do {
        printf("프로그램을 종료 하시려면 'q'를 입력하세요: ");
        quit = getchar();
        //getchar(); // \n: 줄바꿈 기호를 입력받은 뒤 '버린다.'
    } while (quit != 'q');

    printf("프로그램을 종료!\n");
}
