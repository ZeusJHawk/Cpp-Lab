#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct stu{
    string name;
    int age;
    int grade;
};
stu train(stu x){
    x.age++;
    x.grade*=1.2;
    if(x.grade>600) x.grade=600;
    return x;
}
int main(){
    int n;
    cin>>n;
    vector<stu> s(n);
    for(int i=0;i<n;++i){
        cin>>s[i].name>>s[i].age>>s[i].grade;
    }
    for(int i=0;i<n;++i){
        s[i]=train(s[i]);
        cout<<s[i].name<<" "<<s[i].age<<" "<<s[i].grade<<'\n';
    }
    return 0;
}