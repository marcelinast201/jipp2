//
// Created by pc on 11.10.2021.
//
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){

    int c = stoi(argv[1]);
    cout << c << " " << argv[1] <<endl;

    /*int *n = new int;
    int k;
    cout << n << endl << *n << endl << &n << endl << & k << endl;
    delete n;


    int tab[3]={3,2,1};

    int *tab0=new int[5];
    delete[ ] tab0;//alok tabl

    int **tabDd = new int*[5]; //al tab na inty

    for (int i = 0; i<5;++i){
        tabDd[i] = new int[5];
    }
    for (int i = 0; i<5;++i){
        delete[] tabDd[i];
    }*/

   /* for (int i = 0; i <argc ; ++i) {
        cout << argv[i];

    }
*/



    return 0;
}

