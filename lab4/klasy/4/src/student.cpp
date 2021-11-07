//
// Created by pc on 04.11.2021.
//

#include "../include/student.h"
string Student::get_imie() {
    return imie;
}
string Student::get_nazwisko() {
    return nazwisko;
}
int Student::get_numer_albumu() {
    return numer_albumu;
}
double Student::get_liczba_pytan() {
    return liczba_pytan;
}
double Student::get_poprawne_odp() {
    return poprawne_odp;
}
void Student::set_imie(string imie) {
    this->imie=imie;
}
void Student::set_nazwisko(string nazwisko) {
    this->nazwisko=nazwisko;
}
void Student::set_numer_albumu(int numer_albumu) {
    this->numer_albumu=numer_albumu;
}
void Student::set_liczba_pytan(double liczba_pytan) {
    this->liczba_pytan=liczba_pytan;
}
void Student::set_poprawne_odp(double poprawne_odp){
    this->poprawne_odp=poprawne_odp;
}
double Student::oblicz(){
    double srednia;
    srednia=(poprawne_odp/liczba_pytan)*100;
    return srednia;
}