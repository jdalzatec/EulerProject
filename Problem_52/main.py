from itertools import permutations

def found(n):
    options = ["".join(l) for l in permutations(str(n))]
    for i in range(2, 7):
        if not str(i * n) in options:
            return False

    return True

number = 1
while not found(number):
    number += 1

print(number)

# time 6.921 s