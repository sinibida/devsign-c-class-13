#include <stdio.h>

int main() {
    for (int i = 0; i < 100; i++) {
        if (i == 24) {
            printf("Break!! i = %3d\n", i);
            break;
        }
        printf("i is %3d\n", i);
    }
    printf("프로그램 중지\n");
}
