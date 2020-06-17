#include <iostream>
#include <vector>


void insertion_sort(int* a, int n) {
    for(int j = 1; j < n; ++j) {
        int key = *(a + j);
        int i = j - 1;

        while(i > -1 and *(a + i) > key) {
            *(a + i + 1) = *(a + i);
            i--;
        }

        *(a + i + 1) = key;
    }

}

void print_array(int* a, int n) {
    for(int i = 0; i < n; ++i) {
        std::cout << *(a + i) << " ";
    }

    std::cout << std::endl;
}


int main() {
    int a[10], n = 10;
    int j = 0, i = 10;

    while(i > 0) {
        *(a + j) = i;
        ++j;
        --i;
    }


    print_array(a, n);
    insertion_sort(a, n);
    std::cout << "-----------------" << std::endl;
    print_array(a, n);

    return 0;
}