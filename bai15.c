#include <stdio.h>

void solve() {
    long long n;
    scanf("%lld", &n);
    
    long long sum = 0;
    if (n == 0) {
        sum = 0;
    } else {
        while (n > 0) {
            sum += n % 10;
            n /= 10;       
        }
    }
    printf("%lld\n", sum);
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