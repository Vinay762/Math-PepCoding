#include <bits/stdc++.h>
using namespace std;

bool check_even(int n, int k){
    int rem = n-2*k;
    if(rem < 0)
        return 0;
    if(rem&1)return 0;
    cout<<"YES"<<"\n";
    for(int i = 0; i<k-1; i++)
        cout<<2<<' ';
    cout<<2+rem<<"\n";
    return 1;
}

bool check_odd(int n, int k){
    int rem = n-k;
    if(rem < 0)return 0;
    if(rem&1)return 0;
    cout<<"YES"<<"\n";
    for(int i = 0; i<k-1; i++)
        cout<<1<<' ';
    cout<<1+rem<<"\n";
    return 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        if(check_even(n,k) || check_odd(n,k))
            continue;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}