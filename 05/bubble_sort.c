#include <stdio.h>

#define SIZE 6

int main() {
    int arr[SIZE] = {6,4,100,3,-50,1};

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
