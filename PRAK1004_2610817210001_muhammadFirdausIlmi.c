#include <stdio.h>

int hanoi_steps(int n) {
    if (n == 1) {
        return 1;
    } else {
        return 2 * hanoi_steps(n - 1) + 1;
    }
}

int main() {
    int n;
    
    if (scanf("%d", &n) == 1) {
        int result = hanoi_steps(n);
        printf("Jumlah langkah minimum untuk %d cakram adalah %d\n", n, result);
    }
    return 0;
}