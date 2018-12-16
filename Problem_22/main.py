import string

def getSum(name):
    letters = string.ascii_uppercase

    acum = 0
    for l in name:
        acum += (letters.index(l) + 1)

    return acum


def main():

    with open("p022_names.txt") as file:
        line = file.readline()

    line = line.split(",")
    line = sorted([s.replace('"', '') for s in line])

    scores = 0
    for i, name in enumerate(line):
        scores += getSum(name) * (i + 1)
    print(scores)


if __name__ == '__main__':
    main()