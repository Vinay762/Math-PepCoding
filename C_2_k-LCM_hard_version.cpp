#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int onecount = k - 3;
        for (int i = 0; i < onecount; i++)
        {
            cout << 1 << " ";
        }
        n = n - onecount;
        if (n % 2 == 0)
        {
            if (n % 4 == 0)
            {
                cout << n / 4 << " " << n / 4 << " " << n / 2 << endl;
            }
            else
            {
                cout << (n / 2 - 1) << " " << (n / 2 - 1) << " " << 2 << endl;
            }
        }
        else
        {
            cout << n / 2 << " " << n / 2 << " " << 1 << endl;
        }
    }
    return 0;
}