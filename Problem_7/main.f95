program problem_7
    implicit none
    logical :: isPrime
    integer :: i
    integer :: counter
    integer :: limit
    integer :: num

    counter = 1
    limit = 10001
    num = 3

    do while (counter .LT. limit)
        if (isPrime(num)) then
            counter = counter + 1
        endif
        num = num + 2
    enddo

    print *, num - 2
    print *, counter

end program problem_7

logical function isPrime(number)
    implicit none
    integer :: number
    integer :: i

    if ((number .EQ. 0) .OR. (number .EQ. 1) .OR. ((number .NE. 2) .AND. (modulo(number, 2) .EQ. 0))) then
        isPrime = .FALSE.
        return
    endif

    do i=3, number / 3, 2
        if (modulo(number, i) .EQ. 0) then
            isPrime = .FALSE.
            return
        endif
    enddo

    isPrime = .TRUE.
    return
    
end function isPrime