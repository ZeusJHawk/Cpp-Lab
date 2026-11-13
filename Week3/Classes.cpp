#include "Classes.h"
X::X(int val) {i = val;}
void Y::g(X* px) {px->i += 1;}
void Z::f(X* px) {px->i += 5;}
int X::getI() { return i;}
void h(X* px) {px->i += 10;}