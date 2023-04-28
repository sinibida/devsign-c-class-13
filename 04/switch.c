#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("1 input\n");
            break;
        case 2: // a == 2 || a == 3
        case 3:
            printf("2 input\n");
            printf("3 input\n");
            break;
        default:
            printf("big number!!!!!\n");
            break;
    }
}
