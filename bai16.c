#include <stdio.h>

void solve() {
    long long n;
    scanf("%lld", &n);
    
    long long last_digit = n % 10;
    
    long long first_digit = n;
    while (first_digit >= 10) {
        first_digit /= 10;
    }
    
    if (first_digit == last_digit) {
        printf("YES\n"); 
    } else {
        printf("NO\n");  
    }
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