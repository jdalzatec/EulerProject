for (i in (1:1000)){ 
    for (j in (i:1000)){
        c <- i*i + j*j
        sum <- i + j + sqrt(c)
        if (sum == 1000){
            product <- i*j*sqrt(c)
            print(product)
            }
        }
    }