#include <stdio.h>

int main() {
    double a, b;
    if (scanf("%lf %lf", &a, &b) == 2) {
        if (a == 0) {
            if (b == 0) {
                printf("Vo so nghiem\n");
            } else {
                printf("Vo nghiem\n");
            }
        } else {
            double x = -b / a;
            printf("%.2f\n", x);
        }
    }
    return 0;
}