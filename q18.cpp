#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        double d = (double)(a + c) / 2.0;
        if (b == d)
        {
            
            cout << "YES" << endl;
            continue;
        }
        d = (double)((a + c) / 2.0) / b;
        long long l = ((a + c) / 2) / b;
        if (d == l)
        {

            if (d > 0 && l > 0)
            {
                cout << "YES" << endl;

                continue;
            }
        }
        d = (double)((2.0 * b) - c) / a;
        l = ((2 * b) - c) / a;
        if (d == l)
        {

            if (d > 0 && l > 0)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        d = (double)((2.0 * b) - a) / c;
        l = ((2 * b) - a) / c;
        if (d == l)
        {

            if (d > 0 && l > 0)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }
}