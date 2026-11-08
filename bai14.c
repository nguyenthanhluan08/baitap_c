#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
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
    return 0;
}