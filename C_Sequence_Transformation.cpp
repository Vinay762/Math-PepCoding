#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int t = 1;
    while(n>3){
        for(int i = 1; i<=n-(n/2); i++){
            cout<<t<<" ";
        }
        n /= 2;
        t *= 2;
    }
    if(n == 3)cout<<t<<" "<<t<<" "<<t*3<<endl;
    if(n == 2)cout<<t<<" "<<t*2<<endl;
    if(n == 1) cout<<t<<endl;

    return 0;
}