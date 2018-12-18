program problem_34
    implicit none
    logical :: isCurious
    integer(kind = 8) :: i, total
    integer :: pow

    pow = 5
    total = 0
    do i = 10, 10 ** pow ! This limit was just a guess, there must be a reason but I don't know it.
        if (isCurious(i, pow)) then
            total = total + i
        endif
    enddo
    print *, total

end program problem_34

logical function isCurious(number, pow)
    implicit none
    integer(kind = 8) :: number
    integer :: factorial, local_pow, pow, suma, remainder, digit

    local_pow = pow
    remainder = number
    suma = 0
    do while (local_pow .GT. -1)
        if (modulo(remainder, 10 ** local_pow) .NE. number) then
            digit = remainder / (10 ** local_pow)
            remainder = modulo(remainder, 10 ** local_pow)
            suma = suma + factorial(digit)
            if (suma .GT. number) then
                isCurious = .FALSE.
                return
            endif
        endif
        local_pow = local_pow - 1
    enddo

    isCurious = (suma .EQ. number)
    return

end function isCurious

recursive function factorial(n) result(total)
    implicit none
    integer :: n, total
    if (n .EQ. 0) then
        total = 1
    else
        total = n * factorial(n - 1)
    endif

end function factorial