#include <stdio.h>

#define SIZE 7

int main() {
    int arr[SIZE] = {
        10,
        20, 
        30, 
        40, 
        50,
        60,
        70
    };

    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
}
