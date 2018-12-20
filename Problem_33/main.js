function isCuriousFraction(num, den) {
    for (let i = 1; i < 10; i++) {
        let common = i.toString()
        if (num.includes(common) && den.includes(common)) {
            let new_num = parseInt(num.replace(common, ""))
            let new_den = parseInt(den.replace(common, ""))
            num = parseInt(num)
            den = parseInt(den)
            return (num / den) == (new_num / new_den)
        }

    }
}

// Function that return the Greatest Common Divisor between two numbers
function GCD(a, b) {
    if (b === 0)
        return a
    else
        return GCD(b, a % b)
}

let finalNum = 1
let finalDen = 1
for (let num = 10; num < 100; num++) {
    for (let den = num; den < 100; den++) {
        if ((num / den < 1) && isCuriousFraction(num.toString(), den.toString())) {
            finalNum *= num
            finalDen *= den
        }
    }
}

let gcd = GCD(finalNum, finalDen)
console.log(finalDen / gcd)
