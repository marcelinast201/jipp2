//
// Created by pc on 04.11.2021.
//

#include "../include/kula.h"

void Kula::pobierz() {
cout<<"Podaj pole kuli"<<endl;
cin>>r;
}
double Kula::objetosc() {
    double obj;
    obj=4./3*3.1415* pow(r,3);
    return obj;
}