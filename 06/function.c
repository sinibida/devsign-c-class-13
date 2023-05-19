#include <stdio.h>

void hello_devsign() {
    printf("====================\n");
    printf("> Hello DEVSIGN!!\n");
    printf("====================\n");
}

void print_number(int number) {
    printf("number: %d\n", number);
}

void print_sum(int a, int b) {
    printf("sum: %d\n", a + b);
}

int get_sum(int a, int b) {
    return a + b;
}

int get_integer();

int main() {
    #pragma region 
    hello_devsign();
    printf("\n");

    print_number(43);
    print_number(25);
    printf("\n");

    print_sum(10, 20);
    printf("\n");
    #pragma endregion

    int c = get_sum(20, 30);
    printf("%d\n", c);

    int d = get_integer();
    printf("%d\n", d);
}

int get_integer() {
    int input;
    printf("숫자를 입력하십시오: ");
    scanf("%d", &input);
    return input;
}
