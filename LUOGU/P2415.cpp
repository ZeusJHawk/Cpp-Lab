#include<iostream>
using namespace std;
int main(){
    int x,n=0;
    long long sum=0;
    while(cin>>x){
        sum+=x;
        ++n;
    }
    if(n==0){
        cout<<0<<'\n';
        return 0;
    }
    long long times=1LL(n-1);
    cout<<sum*times<<'\n';
    return 0;
}