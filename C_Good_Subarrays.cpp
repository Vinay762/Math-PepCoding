#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t-->0){
        ll n; cin>>n;
        string str; cin>>str;
        ll sum = 0;
        unordered_map<ll,ll>mp;
        mp[0] = (ll)1;
        for(int i = 0; i<n; i++){
            int ele = str[i]-'0';
            sum += ele;

            long k = sum-(i+1);
            mp[k]++;
        }
        ll res = 0;
        for(auto key : mp){
            ll x = key.second;
            res += x*(x-1)/2;
        }
        cout<<res<<"\n";
    }
    return 0;
}