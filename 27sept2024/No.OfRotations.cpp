#include <iostream>
#include <cmath> // for sqrt and M_PI

// Function to calculate the number of rotations
double calculateRotations(double x_init, double y_init, double x_final, double y_final, double radius) {
    // Calculate the Euclidean distance between the initial and final centers
    double distance = std::sqrt((x_final - x_init) * (x_final - x_init) + (y_final - y_init) * (y_final - y_init));
    
    // Calculate the circumference of the circle (2 * pi * radius)
    double circumference = 2 * M_PI * radius;
    
    // Calculate the number of rotations
    double rotations = distance / circumference;
    
    return rotations;
}

int main() {
    // Example usage
    double x_init;
    double y_init;
    double x_final;
    double y_final;
    double radius;  // Example radius

    cin>>x_init>>y_init;
    cin>>x_final>>y_final;
    cin>>radius;
    
    double rotations = calculateRotations(x_init, y_init, x_final, y_final, radius);
    std::cout << "Number of rotations: " << rotations << std::endl;
    
    return 0;
}
