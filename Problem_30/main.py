total = 0

for n in range(1000, 1000000):
    suma = 0
    for i in str(n):
        suma += int(i)**5

    if (n == suma):
        total += n

print(total)