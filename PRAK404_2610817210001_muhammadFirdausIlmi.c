#include <stdio.h>

int main() {
    int menu;
    float firstNumber, secondNumber, result;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukan pilihan : ");
        scanf("%d", &menu);

        if (menu == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Firdaus Ilmi.\n");
            break;
        }

        if (menu < 1 || menu > 5) {
            printf("Input anda salah, silahkan coba lagi.\n\n");
            continue;
        }

        printf("Masukkan nilai pertama : ");
        scanf("%f", &firstNumber);

        printf("Masukkan nilai kedua : ");
        scanf("%f", &secondNumber);

        if (menu == 1) {
            result = firstNumber + secondNumber;
        } else if (menu == 2) {
            result = firstNumber - secondNumber;
        } else if (menu == 3) {
            result   = firstNumber * secondNumber;
        } else if (menu == 4) {
            if (secondNumber == 0) {
                printf("Tidak bisa membagi dengan nol.\n\n");
                continue;
            }

            result = firstNumber / secondNumber;
        }

        if (menu == 1) {
            printf("Hasil Penjumlahan antara %g dengan %g adalah %g\n",
                   firstNumber, secondNumber, result);
        } else if (menu == 2) {
            printf("Hasil Pengurangan antara %g dengan %g adalah %g\n",
                   firstNumber, secondNumber, result);
        } else if (menu == 3) {
            printf("Hasil Perkalian antara %g dengan %g adalah %g\n",
                   firstNumber, secondNumber, result);
        } else if (menu == 4) {
            printf("Hasil Pembagian antara %g dengan %g adalah %g\n",
                   firstNumber, secondNumber, result);
        }

        printf("\n");
    }

    return 0;
}