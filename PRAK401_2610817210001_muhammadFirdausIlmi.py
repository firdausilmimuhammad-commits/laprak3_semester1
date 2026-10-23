multiple, symbol = input().split()
multiple = int(multiple)

for i in range(1, 51):
    if i % multiple == 0:
        print(symbol, end="")
    else:
        print(i, end="")

    if i < 50:
        print(" ", end="")

print()