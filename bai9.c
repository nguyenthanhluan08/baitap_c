#include <stdio.h>

int main() {
    int total_days;
    if (scanf("%d", &total_days) == 1) {
        int years = total_days / 365;
        int remaining_days = total_days % 365;
        
        int weeks = remaining_days / 7;
        int days = remaining_days % 7;
        
        printf("%d %d %d\n", years, weeks, days);
    }
    return 0;
}