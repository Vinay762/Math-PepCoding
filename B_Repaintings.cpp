#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;
    cin>>m>>n;
    int x;
    cin>>x;
    x--;
    int topleftr = x, topleftc = x;
    int botrigr = m-1-x, botrigc = n-1-x;

    int count = 0;

    for(int i = topleftr; i<=botrigr; i++){
        for(int j = topleftc; j<=botrigc; j++){
            if((i == topleftr || i == botrigr || j == topleftc || j == botrigc) && ((i-topleftr+j-topleftc)%2 == 0)){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}