#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m =0;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            if (p[i] != i + 1)
                m = gcd(abs(p[i] - i - 1), m);
            
        }
        
            cout << m << endl;
    }
}