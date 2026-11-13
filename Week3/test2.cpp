#include<iostream>
using namespace std;
class X;
class Y{
    public:
        void g(X* px);
};
class Z{
    public:
        void f(X* px);
};
class X{
    private:
        int i;
    public:
        X(int val=0){i=val;}
        friend void Y::g(X* px);
        friend class Z;
        friend void h(X* px);
        int getI(){return i;} 
};
void Y::g(X* px) {px->i += 1; }
void Z::f(X* px) {px->i += 5;}
void h(X* px) {px->i += 10;}
int main(){
    X x(10);
    Y y;
    Z z;
    y.g(&x);
    cout<<x.getI()<<'\n';
    z.f(&x);
    cout<<x.getI()<<'\n';
    h(&x);
    cout<<x.getI()<<'\n';
    return 0;
}