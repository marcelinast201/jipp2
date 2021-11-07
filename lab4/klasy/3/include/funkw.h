//
// Created by pc on 04.11.2021.
//
#include <iostream>
using namespace std;

#ifndef JIPP2_FUNKW_H
#define JIPP2_FUNKW_H


class FunkcjaKwadratowa {
private:
    float a, b, c;
public:
    void set_a(float);
    void set_b(float);
    void set_c(float);
    float get_a();
    float get_b();
    float get_c();
    void pobierz();
    void wyswietl();
};
#endif //JIPP2_FUNKW_H
