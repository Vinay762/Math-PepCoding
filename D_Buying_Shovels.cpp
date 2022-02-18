#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k){
    int ans = n;
    for(int a = 1; a*a <= n; a++){
        if(n%a == 0){
            int b = n/a;
            if(a <= k){
                ans = min(ans,b);
            }
            if(b <= k){
                ans = min(ans,a);
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int output = solve(n,k);
        cout<<output<<endl;
    }
    return 0;
}