#include <iostream>
using namespace std;
#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    friend ostream& operator<<(ostream &lhs,const Node &node);
    void updateValue(double x, double y);
     friend double pointsDistance(Node a, Node b);

};

class Triangle {
private:
    Node a,b,c;
    string triangle_name;
public:
    Triangle(Node a,Node b,Node c,string triangle_name);
     void display();
    friend ostream& operator<<(ostream &lhs,const Triangle &t);
    double distance(int firstPointIndex, int secondPointIndex);

};
#endif //JIPP2_NODE_H
