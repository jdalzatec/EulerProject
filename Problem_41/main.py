from collections import Counter

def RepeatingDigits(num):
    c = Counter(str(num))
    if any(value > 1 for value in c.values()):
        return True

    return False

def IsPandigital(num):
    digits = len(str(num))
    c = Counter(str(num))
    if not RepeatingDigits(num):
        return all(str(i) in c.keys() for i in range(1, digits + 1))
            
def IsPrime(num): 
    if num > 1: 
        if (num != 2 and num % 2 == 0):
            return False
        for i in range(3, num//3 + 1, 2): 
            if (num % i) == 0: 
                return False
        return True 
    return False

def main():
    n = 7654321
    while n >= 1:
        if IsPandigital(n) and IsPrime(n):
            print (n)
            break
        n -= 1 

if __name__ == '__main__':
    main()