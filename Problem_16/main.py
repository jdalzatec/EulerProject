def main():

    a = str(2**1000)
    suma = 0
    for i in a:
        suma += int(i)
    print(suma)
    
if __name__ == '__main__':
    main()