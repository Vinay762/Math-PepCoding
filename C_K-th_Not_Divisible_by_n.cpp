#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int x = k/(n-1);
        if((x+k)%n == 0){
            cout<<x+k-1<<"\n";
        }else{
            cout<<x+k<<"\n";
        }
    }
    return 0;
}