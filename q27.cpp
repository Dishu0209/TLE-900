#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        vector<long long> b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long max = 0, min = 0,s=0;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            max = max + ceil((double)a[i] / x);
            s=s+a[i];
        }
       min=ceil((double)s/x);
        cout << min << " " << max << endl;
    }
}