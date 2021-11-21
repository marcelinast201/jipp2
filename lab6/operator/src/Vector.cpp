#include "Vector.h"

void print(const Vector &vector) {
    cout << vector.x << ", " << vector.y << endl;
}

Vector operator+(const double &lhs, const Vector &rhs) {
    return Vector(lhs + rhs.x, lhs + rhs.y);
}

Vector::Vector() : x(0), y(0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

Vector &Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator+(const Vector &rhs) {
    return Vector(x + rhs.x, y + rhs.y);
}

Vector Vector::operator+(const double &rhs) {
    return Vector(x + rhs, y + rhs);
}

Vector Vector::operator-(const Vector &rhs) {
    return Vector(x - rhs.x, y - rhs.y);
}

Vector Vector::operator*(const double &sk) const {
    return Vector(x * sk, y * sk);
}
Vector operator*(const double &lhs, const Vector &rhs) {
    return Vector(lhs*rhs.x,lhs*rhs.y);
}
Vector operator*(Vector v1, Vector v2) {
    return Vector(v1.x * v2.x, v1.y * v2.y);
}

bool operator==(Vector v1, Vector v2) {
    if ((v1.x == v2.x) && (v1.y == v2.y))
        return true;
    else {
        return false;
    }
}

ostream &operator<<(ostream &rhs, const Vector &vector) {
    return rhs << vector.x << " : " << vector.y;
}