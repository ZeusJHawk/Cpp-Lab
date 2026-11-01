#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isPrime(string);
bool isPalindrome(string);
int main(){
    long long a,b;
    cin>>a>>b;
    for(int i=a;i<=b;++i){
        string s=to_string(i);
        if(isPalindrome(s)&&isPrime(s)) cout<<i<<'\n';
    }
    return 0;
}
bool isPrime(string s){
    long long x=stoll(s);
    if(x<2) return false;
    for(int i=2;i*i<=x;++i){
        if(x%i==0){
            return false;break;
        }
    }
    return true;
}
bool isPalindrome(string s){
    string ss=s;
    reverse(s.begin(),s.end());
    if(ss==s) return true;
    return false;
}