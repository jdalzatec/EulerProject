program problem_45
    implicit none
    logical :: isPentagonal, isHexagonal, found
    integer(kind=8) :: n, i, triangle
    
    i = 286
    found = .FALSE.
    do while (.NOT. found)
        n = triangle(i)
        if (isPentagonal(n) .AND. isHexagonal(n)) then
            found = .TRUE.
            print *, n, i
        endif
        i = i + 1
    enddo

end program problem_45

integer(kind=8) function triangle(number) result(output)
    implicit none
    integer(kind=8) :: number
    output = (number / 2d0) * (number + 1d0)
    
end function triangle

logical function isPentagonal(number) result(decision)
    implicit none
    integer(kind=8) :: number
    real*16 :: n
    n = (1d0 / 6d0) * (sqrt(24d0 * number + 1d0) + 1d0)
    decision = (n == floor(n))
    
end function isPentagonal

logical function isHexagonal(number) result(decision)
    implicit none
    integer(kind=8) :: number
    real(kind=8) :: n
    n = 25d-2 * (sqrt(8d0 * number + 1d0) + 1d0)
    
    decision = (n == floor(n))
end function isHexagonal
