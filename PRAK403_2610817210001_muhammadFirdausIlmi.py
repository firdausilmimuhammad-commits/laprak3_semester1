a, b = map(int, input().split())

if a < b:
    j = b
    for i in range(a, b + 1):
        print(i, j, end="")
        j -= 1
        if i != b:
            print(" - ", end="")
else:
    j = b
    for i in range(a, b - 1, -1):
        print(i, j, end="")
        j += 1
        if i != b:
            print(" - ", end="")

print()