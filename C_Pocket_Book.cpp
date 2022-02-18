#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int m, n;
	cin >> m >> n;
	vector <string> a(m);
	for(int i = 0; i < m; i++)
		cin >> a[i];
	long long int ans = 1;
	for(int i = 0; i < n; i++)
	{
		unordered_set<char> s;
		for(int j = 0; j < m; j++)
			s.insert(a[j][i]);
		ans = (ans*s.size())%1000000007;
	}
	cout << ans;
}
