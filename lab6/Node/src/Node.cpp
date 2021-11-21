#include "Node.h"

Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y) : x(x), y(y) {}

void Node::display() {
    cout << "x: " << x << "\ty: " << y << endl;
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}
 ostream& operator<<(ostream &lhs,const Node &node){
    return lhs<<node.x<<" "<<node.y;
}
double pointsDistance(Node a, Node b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));

}
Triangle::Triangle (Node a,Node b,Node c,string triangle_name):a(a),b(b),c(c),triangle_name(triangle_name){};
void Triangle::display(){
a.display();
b.display();
c.display();

}
ostream& operator<<(ostream &lhs,const Triangle &t){
    return lhs << "Name:" << t.triangle_name<<endl<<"A: " <<t.a<<endl<<"B: "<<t.b<<endl<<"C: "<<t.c<<endl;

}
double Triangle :: distance(int firstPointIndex, int secondPointIndex){
    Node tab[3]={a,b,c};
    return pointsDistance(tab[firstPointIndex],tab[secondPointIndex]);
}