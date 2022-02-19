#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    string str;
    cin>>str;
    int ct0 = 0;
    for(int i = 0; i<n; i++){
        if(str[i] == '0')ct0++;
    }
    int obal = 2*ct0-n;
    int cbal = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(obal == 0){
            if(cbal == x){
                cout<<"-1"<<endl;
                return;
            }
        }else if(abs(x-cbal)%abs(obal) == 0){
            if((x-cbal)/(obal) >= 0){
                ans++;
            }
        }

        if(str[i] == '0')cbal++;
        else cbal--;

    }
    cout<<ans<<endl;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}