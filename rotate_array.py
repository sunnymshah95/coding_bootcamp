'''
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.

For example:
If the array given is:  [1, 2, 3, 4, 5, 6, 7]
Rotation by 2 gives us: [3, 4, 5, 6, 7, 1, 2]

taken from https://www.geeksforgeeks.org/array-rotation/
'''

import numpy as np

def rotate(arr, d, n):
    result = []

    for i in range(d, n):
        result.append(arr[i])

    for i in range(d):
        result.append(arr[i])

    return result


if __name__ == '__main__':
    arr = []
    n = 7
    d = 2
    
    for i in range(n):
        arr.append(i + 1)

    result = rotate(arr, d, n)

    print("Original array:")
    for item in arr:
        print(f"{item}", end = " ")

    print("\n------------------")
    print("Rotated array:")
    for item in result:
        print(f"{item}", end = " ")