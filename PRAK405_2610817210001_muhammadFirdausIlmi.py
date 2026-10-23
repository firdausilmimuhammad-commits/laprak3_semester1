n, multiplier = map(int, input().split())

grand_total = 0

for i in range(1, n + 1):
    row_total = 0
    terms = []
    
    for j in range(i, 0, -1):
        row_total += j * multiplier
        terms.append(f"({j} * {multiplier})")
    
    grand_total += row_total
    row_text = " + ".join(terms)
    print(f"{row_text} = {row_total}")

print(grand_total)