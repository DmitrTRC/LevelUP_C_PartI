//
// Created by Dmitry Morozov on 3/9/22.
//

// Swap MAX and last negative element for M(40) array

#include "shared/swap_mln.hpp"

#include <iostream>


/**
 * It takes an array and its size as arguments and prints the array's elements to the screen
 *
 * @param array the array to be sorted
 * @param n the number of elements in the array
 */
void print_array (int *array, int n) {

    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

/**
 * @brief main function
 * @return 0
 */
int main () {
    std::cout << "HOME WORK 4\n\nTask 1" << std::endl;

    int array_sample[40] = {1, -2, 3, 4, -5, 6, 7, 8, -9, 10,
                            11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                            21, 22, 23, 24, 25, 26, 27, 28, 41, 30,
                            31, 32, 33, 34, 35, 36, 37, 38, 39, 40};

    std::cout << "Array before swap : ";
    print_array (array_sample, 40);

    swap_elements (array_sample, 40);

    std::cout << "Array after swap : ";
    print_array (array_sample, 40);

    return 0;
}