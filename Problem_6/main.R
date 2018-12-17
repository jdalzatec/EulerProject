squares <- function(number){
    n = 0
    factor <- 0
    suma <- c()
    while (n <= number){
        factor <- n * n
        suma <- c(suma, factor)
        n <- n + 1
        }
    return (sum(suma))
    }

global_square <- function(number){
    n = 0
    factor <- 0
    suma <- c()
    while (n <= number){
        factor <- n
        suma <- c(suma, factor)
        n <- n + 1
        }
    return (sum(suma)*sum(suma))
    }

global_square(100) - squares(100)