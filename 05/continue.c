#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 7) {
            printf("Continue!! i = %3d\n", i);
            continue;
        }
        printf("i is %3d\n", i);
        printf("Continue되지 않음\n");
    }
    printf("프로그램 중지\n");
}
