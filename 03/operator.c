#include <stdio.h>

int main() {
    float a = 10.0;
    float b = 3.0;

    printf("%d %d\n", a, b);
    printf("%f\n", a / b /* 10.0 / 3.0 */);

    int c = 10;

    c += 3;
    // c = c + 3;

    printf("c = %d\n", c);

    char d = 'C';
    char e = 'C';

    printf("%d\n", d == e);

    int f = 3.5;

    printf("%d\n", sizeof(f));
    printf("%d\n", sizeof(3.5));
    printf("%d\n", f);
    printf("%f\n", 3.5);
}
