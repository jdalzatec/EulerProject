import numpy

def function(number, i, len_adjacent):
    result = 1
    for j in range(len_adjacent):
        if j + i < len(number):
            result *= int(number[j + i])
        else:
            return 0
    return result
        
def main(): 
    number = open("data.dat", mode = "r")
    number = number.read()
    adjacent_numbers = 13
    products = []
    for i in range(len(number)):
        products.append(function(number, i, adjacent_numbers))
    print(max(products))


if __name__ == '__main__':
    main()