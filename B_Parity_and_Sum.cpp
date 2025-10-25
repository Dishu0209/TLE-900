#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, ne, no, se = 0, maxe = 0, maxo = 0;
        vector<long long> e;
        vector<long long> o;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                e.push_back(a[i]);
                se = se + a[i];
            }
            else
                o.push_back(a[i]);
        }

        sort(e.begin(), e.end());
        sort(o.begin(), o.end());
        ne = e.size();
        no = o.size();

        
        if (ne == 0 || no == 0)
        {
            cout << 0 << endl;
            continue;
        }
        maxe = e[e.size()-1];
        maxo = o[o.size()-1];
        int k = 0;
        long long s = maxo;

        for (int i = 0; i < ne; i++)
        {
           
            if (s < e[i])
            {
                k = 1;
                
                break;
            }
            s = s + e[i];
        }
        if (k == 1)
            cout << ne + 1 << endl;
        else
            cout << ne << endl;
    }
}