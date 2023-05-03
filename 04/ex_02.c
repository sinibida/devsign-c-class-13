#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int temp;
    while (b != 0) {
        a = a % b;

        temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n", a);
}
