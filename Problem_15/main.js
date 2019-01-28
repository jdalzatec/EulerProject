function factorial(number) {
    if (number === 0)
        return 1;
    return number * factorial(number - 1);
}

let L = 20;
let A = factorial(L + L);
let B = factorial(L);

console.log(A / (B * B));

// time 0.310 s

