import numpy
from collections import defaultdict

def main(): 
    numbers = numpy.linspace(1, 20, 20, dtype = int)
    is_zero = defaultdict(list)
    n = 20
    while (n >= 1):
        print(n)
        for i in numbers: 
            if n % i == 0:
                is_zero[n].append(True)
            else:
                is_zero[n].append(False)
        if (all(item == True for item in is_zero[n])):
            break
        n += 20 
    print (n)
if __name__ == '__main__':
    main()