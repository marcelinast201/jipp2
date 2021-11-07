//
// Created by pc on 08.11.2021.
//

#include "../include/Klasa.h"
Klasa::Klasa(){
    tab=new char[1024];
    cout<<"komstruktor  wywolany"<<endl;
}
Klasa::~Klasa(){
    cout<<"destruktor wywolany"<<endl;
    delete[] tab;
}
void Klasa::pauza()
{
    system("PAUSE");
}