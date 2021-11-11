//
// Created by pc on 08.11.2021.
//
#include <iostream>
using namespace std;
#ifndef JIPP2_POJAZD_H
#define JIPP2_POJAZD_H


class Pojazd {
private:
int numer_rej;
string nazwa;
int ilosc_miejsc;
string *pasazer;
string marka;
static string najnowsza_wersja_oprogramowania;
string zainstalowana_wersja_oprogramowania="v1.0";
public:
    void opublikuj_nowe_oprogramowanie(string);
    void zaktualizuj_wersje_oprogramowania();
    void wypisz_wersje_oprogramowanie() const;
    Pojazd(int numer_rej,string nazwa,int ilosc_miejsc,string marka);
    Pojazd(Pojazd &pojazd);
    void wypisz();
    void informacja(string kto,int miejsce);
    ~Pojazd();
    int get_nrrej();
    string get_marka();
    string get_nazwa();
    void set_nazwa(string nazwa);
    void set_nrrej(int numer_rej);
};


#endif //JIPP2_POJAZD_H
