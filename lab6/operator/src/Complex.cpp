#include "Complex.h"

Complex::Complex() : re(0), im(0) {};

Complex::Complex(double re, double im) : re(re), im(im) {};

double Complex::length() {
    return sqrt(pow(re, 2) + pow(im, 2));
}

void print(const Complex &complex) {
    cout << complex.re << "+" << complex.im << "i" << endl;
}

Complex Complex::operator+(const Complex &rhs) {
    return Complex(re + rhs.re, im + rhs.im);
}

Complex Complex::operator-(const Complex &rhs) {
    return Complex(re - rhs.re, im - rhs.im);
}

Complex Complex::operator*(const Complex &rhs) {
    return Complex(re * rhs.re - im * rhs.im, +im * rhs.re + re * rhs.im);
}