#include<iostream>
using namespace std;
typedef unsigned short int UL;
short cmp(UL x,UL y){
    if(y==0) return -1;
    return x/y;
}
int main(){
    UL a,b;
    cin>>a>>b;
    cout<<cmp(a,b)<<'\n';
    return 0;
}