function isPalindrome(number)
{
    let reversed = number.toString().split("").reverse().join("");
    return number == reversed;
}


let digits = 3;
palindromes_arr = [];
for (let i = Math.pow(10, digits - 1); i < Math.pow(10, digits); i++)
{
    for (let j = i; j < Math.pow(10, digits); j++)
    {
        let prod = i * j;
        if (isPalindrome(prod))
        {
            palindromes_arr.push(prod);
        }
    }
}

console.log(Math.max(...palindromes_arr));