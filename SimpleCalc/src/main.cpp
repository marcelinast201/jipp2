#include <iostream>
#include "../include/calc.h"
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 4) {
        help();
        return 1;
    }

    int operation = stoi(argv[1]);
    int a = stoi(argv[2]);
    int b = stoi(argv[3]);

    switch (operation) {
        case 1:
            if (argc == 4)
                cout << add(a, b);
            else {
                help();
            }
            break;
        case 2:
            if (argc == 4)
                cout << subtract(a, b);
            else {
                help();
            }
            break;
        case 3:
            if (argc == 6) {
                int c = stoi(argv[4]);
                int h = stoi(argv[5]);

                cout << volume(a, b, c, h);
            } else {
                help();
            }
            break;
        case 4:
            help();
            break;
        default:
            help();

    }
    return 0;
}
