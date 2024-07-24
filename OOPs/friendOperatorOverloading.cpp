#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;
public:
    // Parameterized constructor with default arguments
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    // Friend function to add two complex numbers
    friend Complex operator+(Complex x1, Complex x2);

    // Function to display the complex number
    friend ostream& operator<<(ostream &o, const Complex &c1);
};

// Definition of friend function
Complex operator+(Complex x1, Complex x2) {
    Complex temp; // Temporary complex number to store result
    temp.real = x1.real + x2.real;
    temp.img = x1.img + x2.img;
    return temp;
}

// Definition of the friend function for overloading << operator
ostream& operator<<(ostream &o, const Complex &c1) {
    o << c1.real << " +i" << c1.img;
    return o;
}

int main() {
    Complex c1(3, 4); // First complex number
    Complex c2(4, 1); // Second complex number
    Complex c3 = c1 + c2; // Add c1 and c2

    cout << c3 << endl; // Output the result
    return 0;
}
