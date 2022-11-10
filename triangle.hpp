#include <iostream>

class Triangle {
    private:
    // Three sides of a triangle
        float side_A_;
        float side_B_;
        float side_C_;

    // Three interior angles of a triangle
    // Use Degrees by default
        float angle_A_;
        float angle_B_;
        float angle_C_;

    public:
    // Constructor
        Triangle () : Triangle (3, 4, 5, 53.13, 36.87, 90) {}

        Triangle (float side_A, float side_B, float side_C, float angle_A, float angle_B, float angle_C)
                : side_A_(side_A), side_B_(side_B), side_C_(side_C), angle_A_(angle_A), angle_B_(angle_B), angle_C_(angle_C) {}

    // Get functions for characteristics of triangle
    // Get sides
        float get_side_A() { return side_A_; }
        float get_side_B() { return side_B_; }
        float get_side_C() { return side_C_; }

    // Get angles
        float get_angle_A() { return angle_A_; }
        float get_angle_B() { return angle_B_; }
        float get_angle_C() { return angle_C_; }

    // Set functions for the characteristics of triangle
    // Set sides
        float set_side_A(float side_A) { return side_A_ = side_A; }
        float set_side_B(float side_B) { return side_B_ = side_B; }    
        float set_side_C(float side_C) { return side_C_ = side_C; }    

    // Set angles
        float set_angle_A(float angle_A) { return angle_A_ = angle_A; }
        float set_angle_B(float angle_B) { return angle_B_ = angle_B; }
        float set_angle_C(float angle_C) { return angle_C_ = angle_C; }

    // Verify if triangle is valid
        bool is_triangle_valid();
};