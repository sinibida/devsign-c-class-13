#include <stdio.h>
#define SIZE 10

int main()
{
    // 배열 초기화
    float arr[SIZE];
    
    // 배열 입력
    for (int i = 0; i < SIZE; i++) {
        scanf("%f", &(arr[i]));
    }
    
    // 버블 정렬!!
    float temp;
    for (int i = 0; i < SIZE - 1; i++) { 
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // 배열 출력
    for (int i = 0; i < SIZE; i++) {
        printf("%f ", arr[i]);
    }
    printf("\n");
}
