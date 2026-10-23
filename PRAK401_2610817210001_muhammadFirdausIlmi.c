#include <stdio.h>

int main() {
    int multiple;
    char symbol[10];

    scanf("%d %s", &multiple, symbol);

    for (int i = 1; i <= 50; i++) {
        if (i % multiple == 0) {
            printf("%s", symbol);
        } else {
            printf("%d", i);
        }

        if (i < 50) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}