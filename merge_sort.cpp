/*
Merge sort:
-----------
Divide: divide the n-element array into two subsequences of n/2 elements each
Conquer: sort the two subsequences recursively using merge sort
Combine: merge the two sorted subsequences to produce the sorted array.

code based on the code from https://www.tutorialspoint.com/cplusplus-program-to-implement-merge-sort

Complexity:
-----------

*/

#include <iostream>
#include <algorithm>

void print_array(int* a, int n) {
    for(int i = 0; i < n; ++i) {
        std::cout << *(a + i) << " ";
    }

    std::cout << std::endl;
}

void merge(int* a, int l, int m, int r) {
    int i {0}, j {0}, k {0}, nl {0}, nr {0};
    nl = m - l + 1;
    nr = r - m;

    int larr[nl], rarr[nr];

    for(i = 0; i < nl; ++i) {
        *(larr + i) = *(a + l + i);
    }

    for(j = 0; j < nr; ++j) {
        *(rarr + j) = *(a + m + 1);
    }

    while(i < nl and j < nr) {
        if(*(larr + i) <= *(rarr + j)) {
            *(a + k) = *(larr + i);
            ++i;
        }

        else {
            *(a + k) = *(rarr + j);
            ++j;
        }

        ++k;
    }

    while(i < nl) {
        *(a + k) = *(larr + i);
        ++i;
        ++k;
    }

    while(j < nr) {
        *(a + k) = *(rarr + j);
        ++j;
        ++k;
    }
}

void merge_sort(int* a, int l, int r, int n) {
    int m;
    if(l < r) {
        m = l + (int) (r - l) / 2;
        merge_sort(a, l, m, n);
        merge_sort(a, m + 1, r, n);
        merge(a, l, m, r);
    }



    print_array(a, n);
}


int main() {
    int a[] {1, 0, 3, -4, 5, 6, 9, 10, 23, -32};
    int n = 10;

    print_array(a, n);
    merge_sort(a, 0, n - 1, n);
    std::cout << "-----------------" << std::endl;
    print_array(a, n);

    return 0;
}