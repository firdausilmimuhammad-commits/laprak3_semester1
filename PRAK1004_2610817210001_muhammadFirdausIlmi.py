def hanoi_steps(n):
    if n == 1:
        return 1
    else:
        return 2 * hanoi_steps(n - 1) + 1

n = int(input())
result = hanoi_steps(n)

print(f"Jumlah langkah minimum untuk {n} cakram adalah {result}")