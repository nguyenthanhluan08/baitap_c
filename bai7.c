#include <stdio.h>

int main() {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) == 2) {
        if (b == 0) {
            // Đề bài không nói rõ b=0 ở bài này nhưng phòng hờ chia cho 0
            return 0;
        }
        printf("%lld\n", a + b);                 // 1. Tổng
        printf("%lld\n", a - b);                 // 2. Hiệu
        printf("%lld\n", a * b);                 // 3. Tích
        printf("%lld\n", a / b);                 // 4. Chia phần nguyên
        printf("%lld\n", a % b);                 // 5. Chia phần dư
        printf("%.2f\n", (float)a / b);          // 6. Chia kết quả thực (đúng 2 chữ số sau dấu phẩy)
    }
    return 0;
}