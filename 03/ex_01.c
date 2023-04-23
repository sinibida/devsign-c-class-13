#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float deter = b * b - 4 * a * c;

    if (deter < 0) {
        printf("0\n");
    } else if (deter == 0) {
        printf("1\n");
    } else { // deter > 0
        printf("2\n");
    }
}
