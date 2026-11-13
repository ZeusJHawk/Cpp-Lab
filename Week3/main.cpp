#include <iostream>
#include "Classes.h"
using namespace std;
int main() {
    X x(0);
    Y y;
    Z z;
    y.g(&x);
    cout<<x.getI()<<'\n';
    z.f(&x);
    cout<<x.getI()<<'\n';
    h(&x);
    cout << x.getI() <<'\n'; 
    return 0;
}