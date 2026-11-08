#include <stdio.h>

void solve() {
    long long n;
    scanf("%lld", &n);
    long double result = 1.0L / n;
    printf("%.15Lf\n", result);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}