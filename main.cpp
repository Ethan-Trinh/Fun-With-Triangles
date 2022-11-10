#include <iostream>
#include "triangle.hpp"

int main() {
    Triangle sample_triangle;

    bool test = sample_triangle.is_triangle_valid();

    if (test == true) {
        std::cout << "True!";
    } else {
        std::cout << "False!";
    }

    return 0;
};