//
// Created by pc on 15.11.2021.
//
#include <iostream>
#include "Node.h"
using namespace std;
int main(){
   /* Node a(1,1) ,b(5,3) ;
    a.display();
    b.display();
    cout<< pointsDistance(a,b);
  */
    Node a, b(5,8), c(1, 16);
    Triangle triangle(a, b, c, "First Triangle");

    triangle.display();
    cout << triangle << endl;
    cout << "Distance between first and second point is " << triangle.distance(0,1) << endl;
    return 0;
}
