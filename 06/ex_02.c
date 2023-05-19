#include <stdio.h>

#define SIZE 10

void sort_array(int* arr) {
    int temp;
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    // 배열 선언
    int arr[SIZE];
    
    // 배열 값 입력
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", arr + i/* !! */);

    }
	
	// 배열 정렬
	sort_array(arr);
	
    // 배열 값 출력
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
	printf("\n");
}

