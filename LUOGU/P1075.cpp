#include<iostream>
using namespace std;
long long Priem(long long n){
    if(n<2) return 1;
    for(int i=2;i*i<=n;++i){
        if(n%i==0) return i;
        else continue;
    }
}
int main(){
    long long n;
    cin>>n;
    cout<<n/Priem(n)<<'\n';
    return 0;
}