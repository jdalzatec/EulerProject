import numpy

def main():

    data = numpy.loadtxt("data.dat")
    suma = str(sum(data))
    print(suma[:11:].replace(".", ""))

if __name__ == '__main__':
    main()