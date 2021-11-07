

#include "../include/funkw.h"
float FunkcjaKwadratowa::get_a()
{
    return a;
}

float FunkcjaKwadratowa::get_b()
{
    return b;
}

float FunkcjaKwadratowa::get_c()
{
    return c;
}

void FunkcjaKwadratowa::set_a(float a)
{
    this->a = a;
}

void FunkcjaKwadratowa::set_b(float b)
{
    this->b = b;
}

void FunkcjaKwadratowa::set_c(float c)
{
    this->c = c;
}
void FunkcjaKwadratowa::pobierz() {
    cout<<"Podaj 3 wartosci"<<endl;
    cin>>a>>b>>c;
}
void FunkcjaKwadratowa::wyswietl() {
    cout<<"f(x) ="<< a<<" x^2 +"<< b <<"x +"<< c<<endl;
}