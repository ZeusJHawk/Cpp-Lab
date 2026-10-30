#include<iostream>
using namespace std;
long long fit(int n){
    if(n==1||n==2) return 1;
    return fit(n-1)+fit(n-2);
}
int main(){
    int x;
    cin>>x;
    cout<<fit(x)<<'\n';
    return 0;
}