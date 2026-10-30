#include<iostream>
using namespace std;
long long getPower(int a,int b){
    if(b==0) return 1;
    else if(b<0) return 0; 
    else return a*getPower(a,b-1);
}
double getPower(double a,int b){
    if(b==0) return 1.0;
    else if(b<0) return 1.0/getPower(a,-b);
    else return a*getPower(a,b-1);
}
int main(){
    int x,m;
    double y;
    cin>>x>>y>>m;
    cout<<getPower(x,m)<<'\n';
    cout<<getPower(y,m)<<'\n';
    return 0;
}