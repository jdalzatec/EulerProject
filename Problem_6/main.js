var limit = 100
var sum_1 = 0
var sum_2 = 0

for (var i = 1; i <= limit; i++) {
    sum_1 += (i * i)
    sum_2 += i
}

sum_2 *= sum_2
var total = sum_2 - sum_1

console.log(total)