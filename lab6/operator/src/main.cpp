#include "Vector.h"
#include "Complex.h"

int main() {
    Vector v1, v2(5,5);

   print(v1);
    Vector v3 = v1 + v2;
  print(v3);
    Vector v4 = v2 + 5;
    Vector v5 = 5 + v2;
    print(v4);
   print(v5);
   Vector v6 = v4-v2;
   print(v6);
   Vector v7 = 3*v6;
   print(v7);
   v7+=v6;
   print(v7);
   bool wyn = v3==v4;
    cout<<wyn<<endl;
    Vector v8;
    cout << v8 << endl;
/*Complex c1(2,4),c2(3,1);
print(c1);
Complex c3=c1+c2;
print(c3);
Complex c4=c1*c2;
print(c4);
*/
    return 0;
}
