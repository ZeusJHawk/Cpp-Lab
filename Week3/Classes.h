#ifndef CLASSES_H
#define CLASSES_H
class X;
class Y {
public:
    void g(X* px);
};
class Z {
public:
    void f(X* px);
};
class X {
private:
    int i;
public:
    X(int val = 0);
    friend void Y::g(X* px);
    friend class Z;
    friend void h(X* px);
    int getI();
};
void h(X* px); 
#endif