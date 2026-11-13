#include<iostream>
using namespace std;
class Cat{
    private:
        static int numofCats;
    public:
        Cat();
        static int getNumofCats();
};
int Cat::numofCats=0;
Cat::Cat(){
    numofCats++;
}
int Cat::getNumofCats(){
    return numofCats;
}
int main(){
    Cat cat1;
    Cat cat2;
    cout<<Cat::getNumofCats()<<'\n';
    return 0;
}