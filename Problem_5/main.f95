program main
    implicit none

    integer :: limit, i, prod, min_value
    integer, dimension(:), allocatable :: numbers

    limit = 20
    allocate(numbers(limit))

    prod = 1
    do i = 1, limit
        if (isPrime(i)) then
            prod = prod * i
            numbers(i) = 1
        else
            numbers(i) = i
        end if
    end do

    min_value = prod
    do while (count(mod(min_value, numbers) /= 0) /= 0)
        min_value = min_value + prod
    end do
    
    print *, min_value


contains
function isPrime(number)
        implicit none
        integer, intent(in) :: number
        logical :: isPrime
        integer :: i

        isPrime = .True.
        do i = 2, number / 2
            if (mod(number, i) .eq. 0) then
                isPrime = .FALSE.
                exit
            end if
        end do
        ! isPrime = .FALSE.
        
    end function isPrime
end program main