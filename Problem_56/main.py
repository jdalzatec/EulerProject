max_sum = 0
for a in range(100):
    for b in range(100):
        suma = sum(int(i) for i in str(a ** b))
        if suma > max_sum:
            max_sum = suma

print(max_sum)

# time 0.162 s