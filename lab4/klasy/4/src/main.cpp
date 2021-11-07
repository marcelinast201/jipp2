//
// Created by pc on 04.11.2021.
//
#include "student.h"
int main(){
    Student student;
student.set_imie("Adam");
student.set_nazwisko("Kowalski");
student.set_numer_albumu(134);
student.set_liczba_pytan(20);
student.set_poprawne_odp(15);
cout<<student.get_imie()<<endl;
cout<<student.get_nazwisko()<<endl;
cout<<"nr albumu: "<<student.get_numer_albumu()<<endl;
cout<<"Srednia: "<<student.oblicz()<<"%";
return 0;
}
