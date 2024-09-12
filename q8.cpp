#include <iostream>
#include <string>  // Include the string library
using namespace std;

class StringConcat {
    string str;  // Use std::string instead of char array

public:
    // Constructor to initialize the string
    StringConcat(const string& s) : str(s) {}

    // Friend function declaration to concatenate two strings
    friend StringConcat concatenate(const StringConcat& s1, const StringConcat& s2);

    // Function to display the string
    void display() const {
        cout << str << endl;
    }
};

// Friend function definition
StringConcat concatenate(const StringConcat& s1, const StringConcat& s2) {
    // Concatenate the strings of the two objects
    return StringConcat(s1.str + s2.str);
}

int main() {
    // Create two StringConcat objects
    StringConcat s1("Hello, ");
    StringConcat s2("king!");

    // Concatenate the two strings using the friend function
    StringConcat s3 = concatenate(s1, s2);

    // Display the result
    cout << "Concatenated string: ";
    s3.display();

    return 0;
}
