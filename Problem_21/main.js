const sum = arr => arr.reduce((a, b) => a + b, 0)

function divisors(number) {
    var divisors = [];
    for (var i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            divisors.push(i);
        }
    }
    return divisors;
}

function IsAmicable(number) {
    l1 = divisors(number);
    sum1 = sum(l1);
    if (sum1 == number) {
        return false;
    }

    l2 = divisors(sum1);
    sum2 = sum(l2);
    return {"are": sum2 == number, "sum": sum1};
}

var max = 10000;
amicables = [];
for (var i = 1; i <= max; i++) {
    if (! amicables.includes(i)) {
        result = IsAmicable(i);
        if (result.are) {
            amicables.push(i);
            amicables.push(result.sum);
        }
    }
}
console.log(sum(amicables));