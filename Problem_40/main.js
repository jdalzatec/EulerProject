var decimalPart = ""

var integer = 1
while (decimalPart.length < 1000000) {
    decimalPart += integer.toString()
    integer++
}

var total = 1
for (index of [0, 9, 99, 999, 9999, 99999, 999999]) {
    total *= parseInt(decimalPart[index])
}

console.log(total)

