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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m = *max_element(a.begin(), a.end()) - a[0];

        for (int i = 1; i < n; i++)
        {
            m = max(m, (a[i - 1] - a[i]));
        }

        m = max(m, (a[n - 1] - a[0]));

        m = max(m, (a[n - 1] - *min_element(a.begin(), a.end())));

        cout << m << endl;
    }
}