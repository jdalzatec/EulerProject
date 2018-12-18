palindromes = c()
    for (i in (100:1000)){
        for (j in (i:1000)){
            product <- i * j
            backwards <- as.integer(paste(rev(strsplit(as.character(product),"")[[1]]),collapse=""))
            if (product == backwards){
                    palindromes <- c(palindromes, product)
                }
            }
        }
print(max(palindromes))