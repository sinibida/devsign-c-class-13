#include <stdio.h>

int main() {
    int a = 1234123412341234; // 오버플로우!
    long long int b = 1234123412341234;
    float c = 3.14;
    char d1 = 'C';
    char d2 = 'A';
    char d3 = 'R';

    printf("%d %lld %f %c%c%c", a, b, c, d1, d2, d3);
}
