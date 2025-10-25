#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]] = i + 1;
        }
        int s = 0;
       

        for (auto i : m)
        {
            int s1 = 0;
            for (auto j : m)
            {
                if (__gcd(i.first, j.first) == 1)
                
                    s1 = i.second + j.second;
                   
                  
                 s = max(s, s1);
            }
           
            
        }
        if (s == 0)
            cout << -1 << endl;
        else
            cout << s << endl;
    }
}