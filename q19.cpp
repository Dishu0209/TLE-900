#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, n, out;
        cin >> x >> n;
        if (x % 2 == 0)
        {
            if (n % 2 == 0)
            {
                if (n % 4 == 0)
                    out = x;
                else
                {
                    out = x + 1;
                }
            }
            else
            {
                if ((n + 1) % 4 == 0)
                    out =x+ n+1;
                else
                    out = x-n;
            }
        }
        else
        {
            if (n % 2 == 0)
            {
                if (n % 4 == 0)
                    out = x;
                else
                {
                    out = x - 1;
                }
            }
            else
            {
                if ((n + 1) % 4 == 0)
                    out = x-n-1;
                else
                    out = x+n;
            }
        }
        cout << out << endl;
    }
}