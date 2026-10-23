#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < b) {
        int j = b;
        for (int i = a; i <= b; i++, j--) {
            printf("%d %d", i, j);
            if (i != b) {
                printf(" - ");
            }
        }
    } else {
        int j = b;
        for (int i = a; i >= b; i--, j++) {
            printf("%d %d", i, j);
            if (i != b) {
                printf(" - ");
            }
        }
    }
    printf("\n");

    return 0;
}