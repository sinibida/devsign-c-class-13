#include <stdio.h>

int main() {
    int scores[10];
    printf("<Enter scores>\n");
    for (int i = 0; i < 10; i++) {
        printf("%02d: ", i + 1);
        scanf("%d", &scores[i]);
    }
    
    int search;
    printf("Score to search: ");
    scanf("%d", &search);
    
    for (int i = 0; i < 10; i++) {
        if (scores[i] == search)
            printf("%02d\n", i + 1);
    }
}
