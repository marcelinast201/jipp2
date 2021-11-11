//
// Created by pc on 08.11.2021.
//
#include "Pojazd.h"
#include <iostream>
using namespace std;
int main(){
    Pojazd bus( 5165,"bus",10,"volvo");
bus.wypisz();
bus.informacja("Anna",1);
bus.wypisz();
bus.wypisz_wersje_oprogramowanie();
bus.opublikuj_nowe_oprogramowanie("v4.7");
bus.zaktualizuj_wersje_oprogramowania();
bus.wypisz_wersje_oprogramowanie();

}