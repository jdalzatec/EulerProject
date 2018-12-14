def fibonacci(maximum):
    sequence = [1, 2]

    n = 1
    while sequence[n] < maximum:
        sequence.append(sequence[n] + sequence[n-1])
        n += 1

    return sequence[:-1]


numbers = fibonacci(4e6)
total = 0
for n in numbers:
    if n % 2 == 0:
        total += n

print(total)

