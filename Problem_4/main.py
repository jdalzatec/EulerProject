def isPalindrome(x):
    return str(x) == str(x)[::-1]

max_product = 1
for i in range(100, 1000):
    for j in range(i, 1000):
        if isPalindrome(i * j) and (i * j > max_product):
            max_product = i * j

print(max_product)