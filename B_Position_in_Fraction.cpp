#include <bits/stdc++.h>
using namespace std;

void solve(int n, int d, int f){
    int ans = 1;
    if(n >= d){
        n /= d;
    }
    while(ans <= d){
        n = n*10;
        int val = n/d;
        if(val == f){
            cout<<ans<<endl;
            return;
        }
        n = n%d;
        ans++;
    }
    cout<<-1<<endl;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num,den,find;
    cin>>num>>den>>find;
    solve(num,den,find);
    return 0;
}