#include <iostream>
using namespace std;
 
long long n;
 
main(){
	cin>>n;
	if (n<3)cout <<-1;
	else if(n%2 == 0)cout<<n*n/4-1<<" "<<n *n/4+1;
	else cout<<(n*n-1)/2<<" "<<(n*n+1)/2;
}