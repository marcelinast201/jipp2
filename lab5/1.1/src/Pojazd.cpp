//
// Created by pc on 08.11.2021.
//

#include "../include/Pojazd.h"
Pojazd::Pojazd(int numer_rej,string nazwa,int ilosc_miejsc,string marka):
numer_rej(numer_rej),nazwa(nazwa),ilosc_miejsc(ilosc_miejsc),marka(marka){
pasazer=new string[ilosc_miejsc];
        for(int i=0;i<ilosc_miejsc;i++){
            pasazer[i]="puste";
        }
}

void Pojazd::wypisz() {
    cout << "Numer rejestracyjny pojazdu: " << numer_rej << endl;
    cout << "Nazwa pojazdu: " << nazwa << endl;
    cout << "Ilosc miejsc w pojezdzie: " << ilosc_miejsc << endl;
    for (int i = 0; i < ilosc_miejsc; i++) {
        cout << i + 1 << " " << pasazer[i] << endl;
    }
    cout << "Marka: " <<marka<< endl;
}
void Pojazd::informacja(string kto, int miejsce) {
pasazer[miejsce-1]=kto;
}
Pojazd::Pojazd(Pojazd &pojazd) {
    numer_rej=pojazd.numer_rej;
    nazwa=pojazd.nazwa;
    ilosc_miejsc=pojazd.ilosc_miejsc;
    marka=pojazd.marka;
    pasazer=pojazd.pasazer;
}
int Pojazd::get_nrrej() {
    return numer_rej;
}
string Pojazd::get_marka() {
    return marka;
}
string Pojazd::get_nazwa() {
    return nazwa;
}
void Pojazd::set_nazwa(string nazwa) {
    this->nazwa=nazwa;
}
void Pojazd::set_nrrej(int numer_rej) {
    this->numer_rej=numer_rej;
}
string Pojazd::najnowsza_wersja_oprogramowania="v2.3";
void Pojazd::zaktualizuj_wersje_oprogramowania() {
    zainstalowana_wersja_oprogramowania=najnowsza_wersja_oprogramowania;
}
  void Pojazd::opublikuj_nowe_oprogramowanie(string numer_wersji) {
najnowsza_wersja_oprogramowania=numer_wersji;
}
void Pojazd::wypisz_wersje_oprogramowanie() const {
    cout<<zainstalowana_wersja_oprogramowania<<endl;
}
Pojazd::~Pojazd(){
    delete[] pasazer;
}