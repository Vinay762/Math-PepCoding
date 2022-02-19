#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        if(n%2 == 0 && m%2 == 0){
            if(k%2 == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else if(n%2 == 0){
            int maxvalueofk = (n*m/2 - n/2);
            if(maxvalueofk >= k && k%2 == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            int minvalueofk = (m/2);
            if(k >= minvalueofk && (k-minvalueofk)%2 == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}