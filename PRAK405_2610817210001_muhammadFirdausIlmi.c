#include <stdio.h>

int main() {
    int n, multiplier;
    if (scanf("%d %d", &n, &multiplier) != 2) return 0;

    int grand_total = 0;

    for (int i = 1; i <= n; i++) {
        int row_total = 0;
        
        for (int j = i; j >= 1; j--) {
            row_total += j * multiplier;
            printf("(%d * %d)", j, multiplier);
            if (j > 1) {
                printf(" + ");
            }
        }
        
        grand_total += row_total;
        printf(" = %d\n", row_total);
    }

    printf("%d\n", grand_total);

    return 0;
}