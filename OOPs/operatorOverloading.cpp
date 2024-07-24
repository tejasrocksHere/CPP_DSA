#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int img;

    // Parameterized constructor
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    // Method to add two complex numbers
    Complex operator+(Complex x) {
        Complex temp(0, 0); // Temporary complex number to store result
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main() {
    Complex c1(3, 4); // First complex number
    Complex c2(4, 1); // Second complex number
    Complex c3 = c1+(c2); // Add c1 and c2

    cout << c3.real << " +i" << c3.img << endl; // Output the result
    return 0;
}
