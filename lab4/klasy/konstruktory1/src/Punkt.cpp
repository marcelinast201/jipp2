//
// Created by pc on 07.11.2021.
//

#include "../include/Punkt.h"
Punkt::Punkt(){
    cout<<"Podaj wspolrzedne punktu A:"<<endl;
    cin>>ax>>ay;
    cout<<"Podaj wspolrzedne punktu B:"<<endl;
    cin>>bx>>by;
}
double Punkt::odleglosc() {
    double odl;
    odl=sqrt(pow(bx-ax,2)+pow(by-ay,2));
    return odl;
}