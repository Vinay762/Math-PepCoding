#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t-->0){
        int x;
        cin>>x;
        int steps = 1;
        while(steps*(steps+1)/2 < x)steps++;
        if(steps*(steps+1)/2-x == 1)steps++;
        cout<<steps<<"\n";
    }
    return 0;
}