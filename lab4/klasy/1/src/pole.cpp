#include <iostream>
#include "../include/pole.h"
using namespace std;
void Pole::pobierz() {
    cout<<"podaj trzy wymiary"<<endl;
    cin>>a>>b>>c;
}
int Pole::oblicz() {
    int pole;
    pole=2*(a*b+b*c+c*a);
    return pole;
}

