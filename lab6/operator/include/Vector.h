#ifndef JIPP2_VECTOR_H
#define JIPP2_VECTOR_H

#include <iostream>
#include <math.h>

using namespace std;

class Vector{
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();

    friend void print(const Vector &vector);


    friend Vector operator+(const double &lhs, const Vector &rhs);

    friend ostream& operator<<(ostream &rhs,const Vector &vector);

    Vector operator+(const Vector &rhs);

    Vector operator+(const double &rhs);

    Vector operator-(const Vector &rhs);

    Vector operator*(const double &sk)const;
friend Vector operator*(const double &lhs, const Vector &rhs);
    Vector& operator+=(const Vector &rhs);

    friend Vector operator*(Vector v1,Vector v2);

    friend bool operator==(Vector v1,Vector v2);


};


#endif //JIPP2_VECTOR_H