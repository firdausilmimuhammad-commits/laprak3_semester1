def total_digit(n):
    if n == 0:
        return 0
    else:
        return (n % 10) + total_digit(n // 10)

n = int(input())
result = total_digit(n)

print(f"Jumlah digit dari {n} adalah {result}")