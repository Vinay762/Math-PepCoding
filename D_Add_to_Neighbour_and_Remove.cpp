#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int idx, int val){
    int p = idx;
    int csum = 0;
    int cost = 0;
    for(int i = idx; i<arr.size(); i++){
        csum += arr[i];
        if(csum > val){
            return -1;
        }
        if(csum == val){
            cost = cost + i-p;
            csum = 0;
            p = i+1;
        }
    }
    if(csum < val)return -1;
    return cost;
}

int solve(vector<int>& arr){
    int ans = arr.size()-1;
    int fix = 0;
    for(int i = 0; i<arr.size(); i++){
        fix += arr[i];
        int cost = partition(arr,i+1,fix);
        if(cost != -1){
            ans = min(ans,i+cost);
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int ans = solve(arr);
        cout<<ans<<endl;
    }
    return 0;
}