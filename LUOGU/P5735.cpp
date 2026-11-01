#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
    double dis1,dis2,dis3,ans;
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    dis1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    dis2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    dis3=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    ans=dis1+dis2+dis3;
     printf("%.2lf",ans);
     return 0;
}