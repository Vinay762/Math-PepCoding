#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long xp,yp,xv,yv;
    cin>>xp>>yp>>xv>>yv;
    long minp = xp+yp;
    long minv = max(xv,yv);
    if(minp <=  minv){
        cout<<"Polycarp";
    }else if(xp <= xv && yp <= yv){
        cout<<"Polycarp";
    }else{
        cout<<"Vasiliy";
    }
    return 0;
}