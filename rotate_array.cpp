
/*
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.

For example:
If the array given is:  [1, 2, 3, 4, 5, 6, 7]
Rotation by 2 gives us: [3, 4, 5, 6, 7, 1, 2]

taken from https://www.geeksforgeeks.org/array-rotation/
*/


#include <iostream>
#include <vector>

/*
Parameters:
----------
arr : the array of elements of type T to be rotated
d   : the number of elements to rotate by
n   : the size of the array

Returns:
--------
result : the rotated array
*/
template <class T>
int* rotate(T* arr, std::size_t d, std::size_t n) {
    T result[n];

    std::size_t j = 0;

    for(std::size_t i = d; i < n; ++i) {
        result[j] = arr[i];
        ++j;
    }

    for(std::size_t i = 0; i < d; ++i) {
        result[j] = arr[i];
        ++j;
    }

    return result;
}


int main() {

    int n = 7, d = 2;

    int arr[n], result[n];

    for(int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }

    std::cout << "Original array:" << std::endl;
    for(auto const x : arr) {
        std::cout << x << " ";
    }

    std::cout << "------------------------" << std::endl;

    result = rotate<int>(arr, d, n);

    std::cout << "Rotated array:" << std::endl;
    for(auto const x : result) {
        std::cout << x << " ";
    }

    return 0;
}