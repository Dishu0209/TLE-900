#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
       unordered_map<long long,int>freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
             
             freq[a[i]]++;
        }
         int m = 0;
    for (auto &[val, cnt] : freq) 
        m = max(m, cnt);

        int x = n - m;
        if (x == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int out = 1;

        int c = m;
        while (x > 0)
        {
            if (c <= 0)
            {
                out++;
                m = m * 2;
                c = m;
            }
            if (c == 1||x==1)
            {
                x = x - 1;
                c = c - 1;
                out++;
            }
            else
            {
                x = x - 2;
                c = c - 2;
                out += 2;
            }
        }

        cout << out << endl;
    }
}
