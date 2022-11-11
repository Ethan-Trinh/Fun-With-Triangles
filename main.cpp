#include <iostream>
#include "triangle.hpp"
#include "pythagorean.hpp"

int main() {
    Triangle sample_triangle;
    Pythagorean pythagorean;

    bool test = sample_triangle.is_triangle_valid();

    float A = sample_triangle.get_side_A();
    float B = sample_triangle.get_side_B();
    float C = sample_triangle.get_side_C();

    float pyth_C = pythagorean.solve_C(A, B);
    float pyth_A = pythagorean.solve_A(B, C);
    float pyth_B = pythagorean.solve_B(A, C);

    if (test == true) {
        std::cout << "True!\n";
        std::cout << pyth_C << "\n";
        std::cout << pyth_A << "\n";
        std::cout << pyth_B << "\n";
    } else {
        std::cout << "False!";
    }

    return 0;
};