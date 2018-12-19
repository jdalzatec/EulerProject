program problem_39
    implicit none
    integer :: a, b, c, p, maximum, counter, chosen_p

    maximum = 0

    do p = 4, 1000
        counter = 0
        do a = 1, p - 2 
            do b = a + 1, p - 2
                c = p - a - b
                if (a*a + b*b .EQ. c*c) then
                    counter = counter + 1
                endif
            enddo
        enddo
        if (counter > maximum) then
            maximum = counter
            chosen_p = p
        endif
    enddo

    print *, chosen_p
    
end program problem_39