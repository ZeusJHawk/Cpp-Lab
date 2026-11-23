#include<iostream>
#include<cmath>
using namespace std;
class SimpleCircle{
        private:
            int *itsRadius;
        public:
            SimpleCircle();
            SimpleCircle(int radius);
            ~SimpleCircle();

            int getRadius() const;
            void setRadius(int  radius);
            double getArea() const;
            double getCircumference() const;
};
SimpleCircle::SimpleCircle(){
        itsRadius=new int(0);
        cout<<itsRadius<<'\n';
    }
SimpleCircle::SimpleCircle(int radius){
    itsRadius=new int(radius);
    cout<<itsRadius<<'\n';
}
SimpleCircle::~SimpleCircle(){
    delete itsRadius;
}
int SimpleCircle::getRadius() const{
    return *itsRadius;
}
void SimpleCircle::setRadius(int radius){
    *itsRadius=radius;
}
double SimpleCircle::getArea() const{
    return  3.1415926*(*itsRadius)*(*itsRadius);
}
double SimpleCircle::getCircumference() const{
    return 2*3.1415926*(*itsRadius);
}
int main(){
    SimpleCircle c(5);
    cout<<c.getRadius()<<'\n';
    cout<<c.getArea()<<'\n';
    cout<<c.getCircumference()<<'\n';
    c.setRadius(10);
    cout<<c.getRadius()<<'\n';
    cout<<c.getArea()<<'\n';
    return 0;
}