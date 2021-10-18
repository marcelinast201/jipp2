
#include <iostream>
#include "../include/calc.h"
using namespace std;

int add(int a,int b) {
    return a + b;
}

int subtract(int a,int b) {
    return a - b;
}
int volume(int a,int b, int c,int h ){
    int p = (1./2)*(a+b)*c;
    return p*h;
}

void help() {
    cout << "Simple Calculator\n"
            //"simpleCalc [nazwa działania]\n"
            "\n"
            "Dzialania:\n"
            "add [a] [b]\n"
            "    Dodawanie dwoch liczb ([a] i [b]) calkowitych."
            "subtract [a] [b]\n"
            "    Odejmowanie dwoch liczb ([a] i [b]) calkowitych.\n"
            "volume [a] [b] [c] [h]\n"
            "    Obliczanie objętosci graniastoslupa o wysokosci [h] i o podstawie trapeza o bokach [a] [b] i [c]\n";
}


