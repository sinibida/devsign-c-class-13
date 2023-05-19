#include <stdio.h>

void add(int val) {
    val += 1;
}

int main() {
    int a = 10;
    add(a);
    printf("%d\n", a);
}
