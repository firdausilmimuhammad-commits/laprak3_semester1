while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    menu = int(input("Masukan pilihan : "))

    if menu == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhammad Firdaus Ilmi.")
        break

    if menu < 1 or menu > 5:
        print("Input anda salah, silahkan coba lagi.")
        print()
        continue

    firstNumber = float(input("Masukkan nilai pertama : "))
    secondNumber = float(input("Masukkan nilai kedua : "))

    if menu == 1:
        hasil = firstNumber + secondNumber
    elif menu == 2:
        hasil = firstNumber - secondNumber
    elif menu == 3:
        hasil = firstNumber * secondNumber
    elif menu == 4:
        if secondNumber == 0:
            print("Tidak bisa membagi dengan nol.")
            print()
            continue
        hasil = firstNumber / secondNumber

    if menu == 1:
        print(f"Hasil Penjumlahan antara {firstNumber:g} dengan {secondNumber:g} adalah {hasil:g}")
    elif menu == 2:
        print(f"Hasil Pengurangan antara {firstNumber:g} dengan {secondNumber:g} adalah {hasil:g}")
    elif menu == 3:
        print(f"Hasil Perkalian antara {firstNumber:g} dengan {secondNumber:g} adalah {hasil:g}")
    elif menu == 4:
        print(f"Hasil Pembagian antara {firstNumber:g} dengan {secondNumber:g} adalah {hasil:g}")