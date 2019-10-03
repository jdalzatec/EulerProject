import math

def main():
    limit = 10**5 #This number is a guess
    total_sum = 0
    for i in range(1,limit+1):
        num = str(i)
        suma = 0
        for j in range(len(num)):
            factorial = math.factorial(int(num[j]))
            suma += factorial
        if suma == i:
            print(i, True)
            total_sum += i
    print(total_sum - 3) #As 1 and 2 are not included in the sum

if __name__ == '__main__':
    main()