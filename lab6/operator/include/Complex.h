//
// Created by pc on 21.11.2021.
//

#ifndef JIPP2_COMPLEX_H
#define JIPP2_COMPLEX_H
#include <iostream>
#include <math.h>

using namespace std;

class Complex{
private:
    double re, im;

public:
    Complex();

    Complex(double re, double im);

    double length();

    friend void print(const Complex &complex);

    Complex operator+(const Complex &rhs);

    Complex operator-(const Complex &rhs);

    Complex operator*(const Complex &rhs);



};
#endif //JIPP2_COMPLEX_H
