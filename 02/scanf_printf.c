#include <stdio.h>

int main() {
    int i1, i2, i3;
    float f1, f2, f3;
    char c1, c2, c3;

    scanf("%d", &i1);
    printf("%d\n", i1);

    scanf("%f", &f1);
    printf("%f\n", f1);

    scanf("%c", &c1);
    printf("%c\n", c1);

    scanf("%d %d", &i1, &i2);
    printf("%d %d\n", i1, i2);

    scanf("%f %d %f", &f1, &i2, &f3);
    printf("%f %d %f\n", f1, i2, f3);

    scanf("%c %c %c", &c1, &c2, &c3);
    printf("%c %c %c\n", c1, c2, c3);
}
