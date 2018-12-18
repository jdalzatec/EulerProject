program problem_21
    implicit none
    integer :: divisorsSum, i, total
    logical :: areAmicable

    total = 0
    do i = 1, 10000
        if (areAmicable(i, divisorsSum(i))) then
            total = total + i
        endif
    enddo

    print *, total

end program problem_21

integer function divisorsSum(number) result(total)
    implicit none
    integer :: number, i
    total = 0

    do i = 1, number / 2
        if (modulo(number, i) .EQ. 0) then
            total = total + i
        endif
    enddo
end function divisorsSum

logical function areAmicable(a, b) result(decision)
    implicit none
    integer :: a, b, divisorsSum
    
    if ((divisorsSum(a) .EQ. b) .AND. (divisorsSum(b) .EQ. a) .AND. (a .NE. b)) then
        decision = .TRUE.
    else
        decision = .FALSE.
    endif
end function areAmicable
