#include <stdio.h>

int main() {
    int a = 45; // 20~40

    if (a < 20) {
        printf("a < 20! False!\n");
    } else if (a > 40) {
        printf("a > 40! False!\n");
    } else {
        printf("20 <= a <= 40, True!\n");
    }

    printf("program is ended");
}
