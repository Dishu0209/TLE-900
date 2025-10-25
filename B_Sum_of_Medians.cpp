#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n * k);
        for (int i = 0; i < n * k; i++)
            cin >> a[i];
        int m = round(n / 2.0);

        long long s = 0;
        for (int i = ((m - 1) * k); i < n * k; i = i + n - m + 1)
        {
            s = s + a[i];
        }

        cout << s << endl;
    }
}