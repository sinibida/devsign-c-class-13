#include <stdio.h>

int main() {
    // 1부터 n까지의 자연수의 합을 구하는 프로그램
    int n = 100; // 100 + 1 + (99 + 2) + (98 + 3) = 101 * 50 = 5050
    int sum = 0;
    for (int i = n; i >= 1; i--) {
        printf("i: %d\n", i);
        sum += i; // 1 + 2 + 3 + 4 + 5 + ... + n
    }
    printf("sum : %d\n", sum);
    printf("Program Ended!\n");
}
