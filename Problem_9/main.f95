program main
    implicit none
    
    integer :: number
    integer, dimension(3) :: arr

    number = 1000

    arr = triplet(number)
    print *, arr

    print *, product(arr)

contains
function triplet(number)
    implicit none
    integer, intent(in) :: number
    integer, dimension(3) :: triplet
    integer :: a, b, c

    loopa: do a = 1, number
        do b = a, number
            c = number - a - b
            if (a*a + b*b == c*c) then
                exit loopa
            end if
        end do
    end do loopa
    
    triplet(1) = a
    triplet(2) = b
    triplet(3) = c
    
end function triplet

end program main