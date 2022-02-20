#include <bits/stdc++.h>
using namespace std;
int mod = 998244353;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        a[i] = a[i]*(i+1)*(n-i);
    }
    vector<int>b(n);
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    int ans = 0;
    for(int i = 0; i<n; i++){
        a[i] %= mod;
        ans = (ans + a[i]*b[i])%mod;
    }
    cout<<ans<<"\n";
    return 0;
}