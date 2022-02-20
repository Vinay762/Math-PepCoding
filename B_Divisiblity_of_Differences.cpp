#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,m;
    cin>>n>>k>>m;
    unordered_map<int,vector<int>>mp;
    int a;
    for(int i = 0; i<n; i++){
        cin>>a;
        int rem = a%m;
        mp[rem].push_back(a);
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second.size() >= k){
            cout<<"Yes"<<"\n";
            for(int i = 0; i<k; i++){
                cout<<it->second[i]<<" ";
            }
            return 0;
        }
    }
    cout<<"No";
    return 0;
}