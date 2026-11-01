#include<iostream>
using namespace std;
bool isPrime(int x){
    if(x<2) return false;
    for(int i=2;i*i<=x;++i){
        if(x%i==0) return false;
    }
    return true;
}
int main(){
    int N;
    cin>>N;
    for(int i=4;i<=N;i+=2){
        for(int A=2;A<=(i/2);++A){
            if(isPrime(A)&&isPrime(i-A)) {
                cout<<i<<"="<<A<<"+"<<i-A<<'\n';
                break;
            }
        }
    }
    return 0;
}