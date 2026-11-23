#include<iostream>
using namespace std;
void reverse(string &s){
    int n=s.length();
    for(int i=0;i<n/2;++i){
        swap(s[i],s[n-i-1]);
    }
}
int main(){
    string str;
    getline(cin,str);
    reverse(str);
    for(int i=0;i<str.length();++i){
        cout<<str[i];
    }
    return 0;
}