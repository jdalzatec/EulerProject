#This code works but is inefficient as hell

chain_length <- c()
number = 1000000

for (i in (2:number)){
  n <- 0
  while(i > 1){
    if (i %% 2 == 0){
      i <- i/2
    }
    else{
      i <- 3*i + 1
    }
    i <- i
    n <- n + 1
  }
  chain_length <- c(chain_length, n)
}

print(chain_length)
number_with_longest_chain = which(chain_length == max(chain_length)) + 1
print (number_with_longest_chain)