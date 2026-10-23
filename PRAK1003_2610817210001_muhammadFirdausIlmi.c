#include <stdio.h>

int total_digit(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + total_digit(n / 10);
    }
}

int main() {
    int n;
    
    if (scanf("%d", &n) == 1) {
        int result = total_digit(n);
        printf("Jumlah digit dari %d adalah %d\n", n, result);
    }
    return 0;
}