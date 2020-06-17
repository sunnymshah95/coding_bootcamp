/*
Selection sort:
---------------
Consider sorting @n numbers stored in array A by first finding 
the smallest element of A and exchanging it with element in A[1].
Then find the second smallest element of A and exchange it with A[2].
Continue in this manner for the first n - 1 elements.

Time complexity: 
----------------
Θ(n^2) 
(estimated and cross-checked with https://www.tutorialspoint.com
/data_structures_algorithms/selection_sort_algorithm.htm)
*/

#include <iostream>

void selection_sort(int* a, int n) {
    for(int i = 0; i < n; ++i) {
        int min = 10000;
        int min_idx = -1;

        // find the minimum element in the rest of the array
        for(int j = i; j < n; ++j) {
            if (*(a + j) < min) {
                min = *(a + j);
                min_idx = j;
            }
        }

        // swap elements
        int temp = *(a + i);
        *(a + i) = *(a + min_idx);
        *(a + min_idx) = temp;
    }
}

void print_array(int* a, int n) {
    for(int i = 0; i < n; ++i) {
        std::cout << *(a + i) << " ";
    }

    std::cout << std::endl;
}


int main() {
    int a[] {1, 0, 3, -4, 5, 6, 9, 10, 23, -32};
    int n = 10;

    print_array(a, n);
    selection_sort(a, n);
    std::cout << "-----------------" << std::endl;
    print_array(a, n);

    return 0;
}