def number_to_word(number):
    num_dict = {
        0: "",
        1: "one",
        2: "two",
        3: "three",
        4: "four",
        5: "five",
        6: "six",
        7: "seven",
        8: "eight",
        9: "nine",
        10: "ten",
        11: "eleven",
        12: "twelve",
        13: "thirteen",
        14: "fourteen",
        15: "fifteen",
        16: "sixteen",
        17: "seventeen",
        18: "eighteen",
        19: "nineteen",
        20: "twenty",
        30: "thirty",
        40: "forty",
        50: "fifty",
        60: "sixty",
        70: "seventy",
        80: "eighty",
        90: "ninety",
        100: "one hundred",
        200: "two hundred",
        300: "three hundred",
        400: "four hundred",
        500: "five hundred",
        600: "six hundred",
        700: "seven hundred",
        800: "eight hundred",
        900: "nine hundred",
        1000: "one thousand",
    }

    if number == 1000:
        return num_dict[number]

    first = number % 10
    second = (number - first) % 100

    if second == 10:
        second += first
        first = 0

    third = (number - second - first)
    connector = " and "
    if third == 0 or (second == 0 and first == 0):
        connector = ""
    word = num_dict[third] + connector + num_dict[second] + " " + num_dict[first]
    return word

def count_num_letters(word):
    return len(word.replace(" ", "").replace("-", ""))

def main():
    acum = 0
    for i in range(1, 1001):
        acum += count_num_letters(number_to_word(i))
    print(acum)



if __name__ == '__main__':
    main()