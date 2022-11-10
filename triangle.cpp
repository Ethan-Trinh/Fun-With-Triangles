#include "triangle.hpp"

bool Triangle::is_triangle_valid() {
    // Sum of interior angles must equal 180 Degrees
    float sum_of_angles = angle_A_ + angle_B_ + angle_C_;

    if (sum_of_angles == 180) { return true; }
    else { return false; }
}