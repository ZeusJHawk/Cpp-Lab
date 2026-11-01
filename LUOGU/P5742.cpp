#include<iostream>
#include<vector>
using namespace std;
struct stu{
    int id;
    int a,b;
};
bool con1(stu x){
    int sum=x.a+x.b;
    int num=x.a*7+x.b*3;
    if(sum>140&&num>=800) return true;
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    vector<stu> s(N);
    for(int i=0;i<N;++i){
        cin>>s[i].id>>s[i].a>>s[i].b;
    }
    for(int i=0;i<N;++i){
        stu m=s[i];
        cout<<(con1(m) ? "Excellent" : "Not excellent")<<'\n';
    }
    return 0;
}