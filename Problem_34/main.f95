program problem_34
    implicit none
    logical :: isCurious
    integer(kind = 8) :: i, total

    total = 0
    do i = 10, 1000000 ! This limit was just a guess, there must be a reason but I don't know it.
        if (isCurious(i)) then
            total = total + i
        endif
    enddo
    print *, total

end program problem_34

logical function isCurious(number)
    implicit none
    integer(kind = 8) :: number
    integer :: factorial, pow, suma, remainder, digit

    remainder = number
    pow = 6
    suma = 0
    do while (pow .GT. -1)
        if (modulo(remainder, 10 ** pow) .NE. number) then
            digit = remainder / (10 ** pow)
            remainder = modulo(remainder, 10 ** pow)
            suma = suma + factorial(digit)
            if (suma .GT. number) then
                isCurious = .FALSE.
                return
            endif
        endif
        pow = pow - 1
    enddo

    isCurious = (suma .EQ. number)
    return

end function isCurious

recursive function factorial(n) result(total)
    implicit none
    integer :: n, total
    if ((n .EQ. 0) .OR. (n .EQ. 1)) then
        total = 1
    else
        total = n * factorial(n - 1)
    endif

end function factorial