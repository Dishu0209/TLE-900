#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> x(n);
        for (int i = 0; i < n; i++)
            cin >> x[i];
        long long s = 0;
        int c = b, i = 0;
        while (i<n&&c>0)
        {
            if (c == 1)
            {
                c = c + min(x[i], a);
                if (c > a)
                    c = a;
                i++;
            }

           s= s+c-1;
            c=1;
        }
        
        s=s+c;
        cout << s << endl;
    }
}