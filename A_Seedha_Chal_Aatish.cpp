#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s, c = 0;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1 || (a[n - 1] >= s && a[0] >= s))
        {
            cout << abs(a[n - 1] - s) << endl;
            continue;
        }
        if ((a[n - 1] <= s && a[0] <= s))
        {
            cout << abs(a[0] - s) << endl;
            continue;
        }

        if ((a[n - 1] > s && a[0] < s) || (a[n - 1] < s && a[0] > s))
        {
            int c1 = min(abs(a[n - 1] - s), abs(a[0] - s));
            int c2 = max(abs(a[n - 1] - s), abs(a[0] - s));
            c = (2 * c1) + c2;
        }
        cout << c << endl;
    }
}