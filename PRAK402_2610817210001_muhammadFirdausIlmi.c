#include <stdio.h>

int main() {
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i += 2) {
        printf("%d", i);
        if (i + 2 <= limit) {
            printf(" ");
        }
    }
    printf("\n");

    int start_even = (limit % 2 == 0) ? limit : limit - 1;

    for (int i = start_even; i >= 2; i -= 2) {
        printf("%d", i);
        if (i - 2 >= 2) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}