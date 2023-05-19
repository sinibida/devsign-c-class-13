#include <stdio.h>

int main() {
    int a = 30;
    int* a_ptr = &a;

    printf("a: %d\n", a);
    // printf("*a_ptr: %d\n", *a_ptr);
    // printf("*(&(a)): %d\n", *(&(a)));
    // printf("&(*(a_ptr)): %p\n", &(*(a_ptr)));

    *a_ptr = 15;
    //a = 15;

    printf("a: %d\n", a);
}
