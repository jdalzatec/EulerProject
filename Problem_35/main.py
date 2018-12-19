from numba import njit

@njit
def isPrime(n):
    if (n == 0 or n == 1 or (n != 2 and n % 2 == 0) or (n != 5 and n % 5 == 0)):
        return False

    for i in range(3, int(n / 3) + 1, 2):
        if n % i == 0:
            return False

    return True

def isCircular(n):
    rotations = {str(n)[x:] + str(n)[:x] for x in range(len(str(n)))}
    for i in rotations:
        if not isPrime(int(i)):
            return False

    return True
    
circular = list()

for n in range(1000000):
    if isCircular(n):
        circular.append(n)

print(circular)
print(len(circular))