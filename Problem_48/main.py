suma = 0
for i in range(1, 1001):
    suma += (i ** i)

print(suma % (10 ** 10))

# time 0.027 s

"""
Sorry guys, you are going to suffer with this one.
I tried with C++ first, but my brute force solution
took over an hour. Python is just lovely for this type
of problems.
"""