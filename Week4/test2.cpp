#include<iostream>
#include<string>
using namespace std;
int countWords(const string &s){
    int count=0;
    for(int i=0;i<s.length();++i){
        if((s[i]<='Z'&&s[i]>='A')||(s[i]<='z'&&s[i]>='a')){
            count++;
        }
    }
    return count;
}
int main(){
    string str;
    getline(cin,str);
    cout<<countWords(str)<<'\n';
    return 0;
}