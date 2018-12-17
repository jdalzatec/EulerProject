program problem_14
    implicit none
    integer:: collatzSequence
    integer(kind = 8):: longest, i, current, longest_start

    longest = 0

    do i = 999999, 2, -1
        current = collatzSequence(i)
        if (current > longest) then
            longest = current
            longest_start = i
        endif
    enddo

    print *, longest_start
    
end program problem_14

integer function collatzSequence(number)
    implicit none
    integer(kind=8):: number, current
    integer:: count
    count = 0
    current = number

    do while (current .NE. 1)
        if (modulo(current, 2) .EQ. 0) then
            current = current / 2
        else
            current = (3 * current) + 1
        endif
        count = count + 1
    enddo

    collatzSequence = count + 1
    return

end function collatzSequence