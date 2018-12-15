program main
    implicit none
    integer :: limit, i
    integer, dimension(:), allocatable :: numbers

    limit = 100
    numbers = (/ (i, i = 1, limit) /)
    print *, sum(numbers) ** 2 - sum(numbers ** 2)
    
end program main