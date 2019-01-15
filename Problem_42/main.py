import numpy

def LetterIndex(word):

    alphabet = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"
    list_ = alphabet.split(" ")
    indexes = list()

    for letter in word:
        index = numpy.where(numpy.array(list_) == letter)[0] + 1
        indexes.append(index[0])

    return sum(indexes)

def IsTriangular(sum):

    sol1 = -0.5 + 0.5* numpy.sqrt(1 + 8 * sum)
    sol2 = -0.5 - 0.5* numpy.sqrt(1 + 8 * sum)

    IsTriangular_ = False

    try:
        if int(sol1) == sol1:
            if sol1 > 0:
                IsTriangular_ = True 
    except:
        pass

    try:
        if int(sol2) == sol2:
            if sol2 > 0:
                IsTriangular_ = True
    except:
        pass

    return IsTriangular_
    

def main():

    with open("words.txt") as file:
        data = file.read().split(",")

    new = list()
    for element in data:
        new.append(element.replace('"', ""))

    counter = 0
    for word in new:
        suma = LetterIndex(word) 
        if IsTriangular(suma) == True:
            counter += 1
    print(counter)

if __name__ == '__main__':
    main()