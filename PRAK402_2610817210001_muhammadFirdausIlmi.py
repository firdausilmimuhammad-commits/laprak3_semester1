limit = int(input())

for i in range(1, limit + 1, 2):
    print(i, end="")
    if i + 2 <= limit:
        print(" ", end="")
print()

start_even = limit if limit % 2 == 0 else limit - 1

for i in range(start_even, 1, -2):
    print(i, end="")
    if i - 2 >= 2:
        print(" ", end="")
print()