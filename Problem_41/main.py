from collections import Counter

def RepeatingDigits(num):

    c = Counter(str(num))
    if any(value > 1 for value in c.values()):
        return True
    else:
        return False

def IsPandigital(num):

    digits = len(str(num))
    c = Counter(str(num))
    if not RepeatingDigits(num):
        j = all(str(i) in c.keys() for i in range(1, digits + 1))
        return j
            
def IsPrime(num): 

    if num > 1: 
        for i in range(2, num//2): 
            if (num % i) == 0: 
                return False
                break
        else:
            return True 
    else: 
        return False

def main():

    largest = 7654321
    n = largest
    while n >= 1:
        if IsPandigital(n) and IsPrime(n):
            print (n)
            break
        n -= 1 

if __name__ == '__main__':
    main()