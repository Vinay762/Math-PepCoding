#include <bits/stdc++.h>
using namespace std;

long long int  gcd(long long int  a, long long int b){
    if(b == 0)return a;
    return gcd(b,a%b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m;
    cin>>n>>m;
    vector<long long int>a(n);
    vector<long long int>b(m);
    for(long long int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(long long int i = 0; i<m; i++){
        cin>>b[i];
    }

    long long int remgcd = 0;

    for(long long int i = 1; i<n; i++){
        remgcd = gcd(remgcd, abs(a[i]-a[0]));
    }

    for(long long int i = 0; i<m; i++){
        long long int ans = gcd(remgcd,a[0]+b[i]);
        cout<<ans<<" ";
    }

    return 0;
}