#include <stdio.h>

void print_devsign(int i) {
    if (i == 0)
        return;
    printf("DEVSIGN\n");
    print_devsign(i - 1);
}

int main() {
    print_devsign(5);
    printf("\n");

    print_devsign(4);
}
