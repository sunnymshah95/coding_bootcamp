
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
arr : the array of elements to be rotated
d   : the number of elements to rotate by
n   : the size of the array

Returns:
--------
result : the rotated array
*/
template <typename T>
std::vector<T> rotate_array(std::vector<T> vec, std::size_t d) {
    std::vector<T> result {};

    for(typename std::vector<T>::iterator it = vec.begin() + d; it != vec.end(); ++it) {
        result.push_back(*it);
    }

    for(typename std::vector<T>::iterator it = vec.begin(); it != vec.begin() + d; ++it) {
        result.push_back(*it);
    }

    return result;
}

int main() {
    std::vector<int> vec, result;
    int n = 7, d = 2;

    for(int i = 1; i < n + 1; ++i) {
        vec.push_back(i);
    }

    std::cout << "Original array:" << std::endl;
    for(const auto x : vec) {
        std::cout << x << " ";
    }

    std::cout << "\n---------------" << std::endl;
    result = rotate_array<int>(vec, (std::size_t) d);

    std::cout << "Rotated array:" << std::endl;
    for(const auto x : result) {
        std::cout << x << " ";
    } 

    return 0;
}