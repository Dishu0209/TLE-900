#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<long long> a(100000);
    a[0] = 0;
    for (int i = 1; i < 100000; i++)
    {
        a[i] = a[i - 1] + i;
    }
    
    
 
    while (t--)
    {
        long long m, s, s1 = 0;
        cin >> m >> s;
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            s1 = s1 + b[i];
        }
        long long c = s + s1;
        if (find(a.begin(), a.end(), c) == a.end())
 
        {
            cout << "NO" << endl;
            continue;
        }
        int n = find(a.begin(), a.end(), c)-a.begin();
       
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            if (b[i] > n)
            {
 
                k = 1;
                break;
            }
        }
        if (k == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}