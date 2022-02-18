#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int ch = 0;
        long long n;
        cin >> n;
        for(long long i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                ch = 0;
                for(long long j = 2; j <= sqrt(n / i); j++){
                    if (i != j && (n / (i * j)) != i && (n / (i * j)) != j && (n % (i * j)) == 0) {
                        cout << "YES\n";
                        cout << i << " " << j <<" "<< n / (i * j) << endl;
                        ch++;
                        break;
                    }
                }
                if (ch == 1)
                    break;
            }
        }
        if (ch == 0)
            cout << "NO\n";
    }
   return 0;
 
}