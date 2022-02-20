#include <bits/stdc++.h>
using namespace std;

int low(int n){
    return (n*(n+1))/2;
}

int high(int i, int k){
    return k*(2*i-1+k)/2;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r,s;
        cin>>n>>l>>r>>s;
        int k = r-l+1;
        unordered_set<int>st;
        int i = n;
        while(k > 0 && i >= 1){
            if(high(i,k) >= s && s-i >= low(k-1)){
                s -= i;
                st.insert(i);
                k--;
            }
            i--;
        }

        if(s>0){
            cout<<-1<<endl;
            continue;
        }else{
            int arr[n+1];
            int pos = l;
            for(int x : st)arr[pos++] = x;
            pos = 1;
            int num = 1;
            while(pos <= n){
                while(pos >= l && pos <= r)pos++;
                while(st.count(num))num++;
                if(pos > n)break;
                arr[pos++] = num++;
            }
            for(int j = 1; j <= n; j++)cout<<arr[j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}