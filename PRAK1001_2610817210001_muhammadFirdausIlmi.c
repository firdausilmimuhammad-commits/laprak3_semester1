#include <stdio.h>

long long faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int n;
    long long result;

    scanf("%d", &n);

    result = faktorial(n);

    printf("%d! = %lld\n", n, result);

    return 0;
}