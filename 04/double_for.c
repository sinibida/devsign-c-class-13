#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) { // 1 2 3 4 5
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
