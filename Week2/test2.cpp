#include<iostream>;
using namespace std;
bool isPrieam(int x){
    if(x<2) return false;
    for(int i=2;i*i<=x;++i){
        if(x/i==0){return false;}
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<(isPrieam(n)?"Yes":"No")<<'\n';
    return 0;
}