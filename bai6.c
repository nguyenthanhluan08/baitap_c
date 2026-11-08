#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        if (b == 0) {
            printf("0\n");
        } else {
            printf("%d %d %d %.2f %d\n", a + b, a - b, a * b, (float)a / b, a % b);
        }
    }
    return 0;
}