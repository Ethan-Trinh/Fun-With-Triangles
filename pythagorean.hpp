// Pythagorean Theorem:
// WORKS FOR RIGHT TRIANGLES ONLY 
// a^2 + b^2 = c^2

class Pythagorean {
    public:
    // Solve for Hypotenuse
        float solve_C(float A, float B); 

    // Solve for Sides
    // Eventually remove one when adjusting code later because both functions are nearly identical, thus make a handler to identify which side is needing the pythagorean theorem
        float solve_A(float B, float C); 
        float solve_B(float A, float C); 

};