#include <stdio.h>

int hailstone_series(int n) {
    if (n == 1)
        return 1;

    if (n % 2 == 0)
        return 1 + hailstone_series(n / 2);
    else
        return 1 + hailstone_series(3 * n + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int series = hailstone_series(n);
    printf("%d\n", series);
}

