#include <stdio.h>
#include <math.h>

void solve() {
    long long n;
    scanf("%lld", &n);
    
    long long root = (long long)sqrt(n);
    
    if (root * root == n) {
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