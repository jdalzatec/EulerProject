program main
    implicit none

    integer :: required_divisors = 500
    integer :: num, i

    num = 0
    i = 0
    do while (count_divisors(num) < required_divisors)
        num = num + i
        i = i + 1
    end do

    print *, num


contains
function count_divisors(number)
        implicit none
        integer, intent(in) :: number
        integer :: count_divisors
        integer :: i

        count_divisors = 1
        do i = 2, number / 2
            if (mod(number, i) == 0) then
                count_divisors = count_divisors + 1
            end if
        end do

        count_divisors = count_divisors + 1
        
    end function count_divisors
end program main