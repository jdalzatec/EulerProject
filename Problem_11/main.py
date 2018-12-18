import numpy

def main():
    numbers = numpy.loadtxt("numbers.txt", dtype=int)

    amount = 4
    products = []
    # horizontal
    for i in range(0, len(numbers)):
        for j in range(0, len(numbers) + 1 - amount):
            prod = 1
            for k in range(amount):
                prod *= numbers[i, j + k]
            products.append(prod)

    # vertical
    for i in range(0, len(numbers) + 1 - amount):
        for j in range(0, len(numbers)):
            prod = 1
            for k in range(amount):
                prod *= numbers[i + k, j]
            products.append(prod)

    # diagonal down
    for i in range(0, len(numbers) + 1 - amount):
        for j in range(0, len(numbers) + 1 - amount):
            prod = 1
            for k in range(amount):
                prod *= numbers[i + k, j + k]
            products.append(prod)

    # diagonal up
    for i in range(amount - 1, len(numbers)):
        for j in range(0, len(numbers) + 1 - amount):
            prod = 1
            for k in range(amount):
                prod *= numbers[i - k, j + k]
            products.append(prod)

    print(numpy.max(products))

if __name__ == '__main__':
    main()