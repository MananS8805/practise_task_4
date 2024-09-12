#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor to initialize Distance object
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {
        normalize();
    }

    // Function to normalize feet and inches
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        } else if (inches < 0) {
            feet -= 1;
            inches += 12;
        }
        if (feet < 0) {
            feet = 0;
            inches = 0;
        }
    }

    // Overloading the -- operator using member function
    Distance operator--() {
        --inches;
        if (inches < 0) {
            inches = 11;
            --feet;
        }
        normalize();
        return *this;
    }

    // Overloading the -- operator using friend function
    friend Distance operator--(Distance& d, int);

    // Function to display distance in feet and inches
    void display() const {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};

// Overloading the -- operator using friend function (postfix)
Distance operator--(Distance& d, int) {
    Distance temp = d;  // store the original value
    d.inches--;
    if (d.inches < 0) {
        d.inches = 11;
        d.feet--;
    }
    d.normalize();
    return temp;  // return the original value before decrement
}

int main() {
    Distance d1(5, 0);  // Initialize 
    Distance d2(3, 2);  // Initialize 

    cout << "Before decrementing (member function):" << endl;
    d1.display();
    --d1;  // Using member function
    cout << "After decrementing (member function):" << endl;
    d1.display();

    cout << "\nBefore decrementing (friend function):" << endl;
    d2.display();

    d2--;  // Using friend function
    cout << "After decrementing (friend function):" << endl;
    d2.display();

    return 0;
}
