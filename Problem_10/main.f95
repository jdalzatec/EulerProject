program problem_10
    implicit none
    logical :: isPrime
    integer(kind = 8) :: total
    integer :: limit
    integer :: current

    ! This code is inneficient as fuck, sorry guys [~85.19 s].

    total = 2
    current = 3
    limit = 2000000

    do while (current .LT. limit)
        if (isPrime(current)) then
            total = total + current
        endif
        current = current + 2
    enddo
    print *, total
    
end program problem_10

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