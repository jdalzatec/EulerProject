#This code works but it is very unefficient!!!

number <- 1000000
longest_start <- 0
longest_count <- 0

for (i in (2:number)){
  n <- 0
  current <- i
  while(current > 1){
    if (current %% 2 == 0){
      current <- current/2
    }
    else{
      current <- 3*current + 1
    }
    n <- n + 1
  }
  
  if (n > longest_count) {
    longest_count <- n
    longest_start <- i
  }
}

print (longest_start)