//
// Created by pc on 04.11.2021.
//
#include <iostream>
using namespace std;

#ifndef JIPP2_STUDENT_H
#define JIPP2_STUDENT_H


class Student {
private:
    string imie;
    string nazwisko;
    int numer_albumu;
    double liczba_pytan;
    double poprawne_odp;
public:
    string get_imie();
    string get_nazwisko();
    int get_numer_albumu();
    double get_liczba_pytan();
    double get_poprawne_odp();
    void set_imie(string);
    void set_nazwisko(string);
    void set_numer_albumu(int);
    void set_liczba_pytan(double);
    void set_poprawne_odp(double);
    double oblicz();


};


#endif //JIPP2_STUDENT_H
