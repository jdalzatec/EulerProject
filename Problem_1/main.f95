program main
    implicit none
    integer :: i
    integer :: acum
    integer :: max

    max = 1000

    acum = 0

    do i = 3, max - 1 
        if ((mod(i, 3) == 0) .or. (mod(i, 5) == 0)) then
            acum = acum + i
        end if
    end do

    print *, acum

    
end program main