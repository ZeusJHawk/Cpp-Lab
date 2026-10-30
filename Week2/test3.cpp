#include<iostream>
using namespace std;
typedef long long LL;
LL gcd(LL a,LL b){
    while(b!=0){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
} 
LL lcm(LL a,LL b){
    return a/gcd(a,b)*b;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y)<<lcm(x,y);
    return 0;
}