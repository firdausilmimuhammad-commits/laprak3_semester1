def faktorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * faktorial(n - 1)

n = int(input())
result = faktorial(n)
print(f"{n}! = {result}")