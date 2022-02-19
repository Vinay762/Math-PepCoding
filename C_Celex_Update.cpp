#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t-->0){
        long x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        long path = (x2-x1)*(y2-y1)+1;
        cout<<path<<"\n";
    }
    return 0;
}