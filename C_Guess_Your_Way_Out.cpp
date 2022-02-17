#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int>pp;

void call(int l, int r, int d, int asf, bool iamrightChild){
    if(l == r){
        cout<<asf<<endl;
        return;
    }
    int mid = (l+r)/2;
    if(iamrightChild){
        if(d>mid)call(mid+1,r,d,asf+r-l+1,true);
        else call(l,mid,d,asf+1,false);
    }else{
        if(d>mid)call(mid+1,r,d,asf+1,true);
        else call(l,mid,d,asf+r-l+1,false);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,n;
    cin>>h>>n;
    pp.resize(52,0);
    pp[0] = 1;
    for(int i = 1; i<52; i++){
        pp[i] = pp[i-1]*2;
    }
    call(1,pp[h],n,0,true);
    return 0;
}