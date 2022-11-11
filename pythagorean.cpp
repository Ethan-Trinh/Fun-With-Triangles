#include "pythagorean.hpp"
#include <math.h>

float Pythagorean::solve_C(float A, float B) {
    float C_squared = ( powf(A, 2) + powf(B, 2));
    float C = sqrt(C_squared);
    return C;
}

float Pythagorean::solve_A(float B, float C) {
    float A_squared = ( powf(C, 2) - powf(B, 2));
    float A = sqrt(A_squared);
    return A;
}

float Pythagorean::solve_B(float A, float C) {
    float B_squared = ( powf(C, 2) - powf(A, 2));
    float B = sqrt(B_squared);
    return B;
}