#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int a_copy = a, b_copy = b; // 변형되기 전의 a, b값을 보관한다.

    int temp;
    while (b != 0) {
        a = a % b;

        temp = a;
        a = b;
        b = temp;
    }

    // 최소공배수 = a * b / 최대공약수
    printf("%d %d\n", a, a_copy * b_copy / a);
}
