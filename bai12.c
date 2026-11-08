#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {

        for (int i = 1; i <= 10; i++) {
            printf("%d", n * i);

            if (i < 10) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}