#include <iostream>
#include <cmath> 
using namespace std;

class Shape {
public:
    // Function to calculate the surface area of a sphere
    double surfaceArea(double radius) {
        return 4 * M_PI * pow(radius, 2);
    }
    // Function to calculate the surface area of a cylinder
    double surfaceArea(double radius, double height) {
        return 2 * M_PI * radius * (radius + height);
    }
    // Function to calculate the surface area of a cube
    double surfaceArea(int side) {
        return 6 * pow(side, 2);
    }
};

int main() {
    Shape shape;   
    double sphereRadius, cylinderRadius, cylinderHeight;
    int cubeSide;
    // Input for sphere
    cout << "Enter radius of the sphere: ";
    cin >> sphereRadius;
    cout << "Surface area of sphere: " << shape.surfaceArea(sphereRadius) << endl;
    // Input for cylinder
    cout << "\nEnter radius and height of the cylinder: ";
    cin >> cylinderRadius >> cylinderHeight;
    cout << "Surface area of cylinder: " << shape.surfaceArea(cylinderRadius, cylinderHeight) << endl;
    // Input for cube
    cout << "\nEnter side length of the cube: ";
    cin >> cubeSide;
    cout << "Surface area of cube: " << shape.surfaceArea(cubeSide) << endl;
    return 0;
}
