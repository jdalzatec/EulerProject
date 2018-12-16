power = 5

function perfect(number, power)
{
    let acum = 0;
    let numberStr = number.toString();
    for (let i = 0; i < numberStr.length; i++)
    {
        acum += Math.pow(parseInt(numberStr[i], 10), power);
    }

    return number == acum;
}


perfect_numbers = [];
for (let num = 2; num <= power * Math.pow(9, power); num++)
{
    if (perfect(num, power))
    {
        perfect_numbers.push(num);
    }
}

sum = 0
for (let i = 0; i < perfect_numbers.length; i++)
{
    sum += perfect_numbers[i]
}

console.log(perfect_numbers);
console.log(sum);