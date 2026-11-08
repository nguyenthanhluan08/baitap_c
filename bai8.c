#include <stdio.h>

int main() {
    double c;
    if (scanf("%lf", &c) == 1) {
        double f = (c * 9.0 / 5.0) + 32.0;
        printf("%.2f\n", f);
    }
    return 0;
}