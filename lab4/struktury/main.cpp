
#include <iostream>

using namespace std;
struct samochod {
    string marka;
    string model;
    int rok;
    string kolor;
    string silnik;
};
struct policz {
    string marka;
    int liczba;
    int rok;
};


int zliczanie(samochod *tab, policz *liczba) {
    int a = 0;
    bool b = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (tab[i].marka == liczba[j].marka) {
                liczba[j].liczba++;
                b = 1;
            }
        }
        if (b == 0) {
            liczba[a].liczba = 1;
            liczba[a].marka = tab[i].marka;
            a++;
        }
        b = 0;
    }
    for (int i = 0; i < a; i++) {
        cout << "ilosc aut tych samych marek " << liczba[i].liczba << " " << liczba[i].marka << endl;
    }
    return 0;
}

int rokpr(samochod *tab, int liczba){
    int a = 0;
    bool b = 0;
    int max=0;
    tab[0].rok=max;
    for (int i = 1; i < liczba; i++) {

        if (tab[i].rok>max) {
            max=tab[i].rok;

        }}
    return max;



}
int main() {
    int ilosc = 4;
    samochod autko[] = {{"Opel",  "Corsa", 1999, "bialy",  "diesel"},
                        {"Ford",  "Kuga",  2010, "bialy",  "benzyna"},
                        {"Skoda", "Rapid", 2017, "czarny", "diesel"},
                        {"Skoda", "Fabia", 2001, "szary",  "diesel"}};
    for (int i = 0; i < ilosc; i++) {
        cout << autko[i].marka << "\t|" << autko[i].model << "\t|" << autko[i].rok << "\t|" << autko[i].kolor << "\t|"
             << autko[i].silnik << endl;
    }
    policz liczba[4];
    zliczanie(autko, liczba);

    cout <<"najstarsze auto jest z roku "<<rokpr(autko,ilosc);
    return 0;
}
