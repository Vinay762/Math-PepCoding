#include <bits/stdc++.h>
using namespace std;

int rangeSum(vector<int>ps, int l, int r){
    if(l == 0)return ps[r];
    return ps[r]-ps[l-1];
}

void solve(){
    int n,q;
    cin>>n>>q;
    string str;
    cin>>str;
    vector<int>ps(n);
    if(str[0] == '+')ps[0] = 1;
    else ps[0] = -1;

    for(int i = 1; i<n; i++){
        ps[i] = ps[i-1];
        int sign = i%2 == 0 ? +1 : -1;
        if(str[i] == '+'){
            ps[i] += sign*1;
        }else{
            ps[i] += sign*(-1);
        }
    }

    for(int i = 0; i<q; i++){
        int l,r;
        cin>>l>>r;
        l--,r--;
        int sum = rangeSum(ps,l,r);
        if(sum == 0){
            cout<<"0"<<endl;
        }else{
            if((r-l+1)%2 == 0){
                cout<<"2"<<endl;
            }else{
                cout<<"1"<<endl;
            }
        }
    }
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