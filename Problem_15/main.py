from itertools import product
from matplotlib import pyplot
import numpy 

def main():

    l = 3
    positions = list()
    for x, y in product(range(l), range(l)): 
        positions.append((x, -y))
    positions = numpy.array(positions)

    pyplot.figure()
    pyplot.scatter(positions[:, 0], positions[:, 1])
    pyplot.show()
    pyplot.plot()

if __name__ == '__main__':
    main()