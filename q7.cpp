#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int s1 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] <= k)
            {
                int s = 0,j;

                for (j = i; j < n-1; j++)
                {
                    if (a[j + 1] - a[j] <= k)
                        s++;
                        else
                        {
                        break;
                        }
                }
                
                if (s1 < s)
                    s1 = s;
                    i=j;
            }
        }
        s1++;
        cout << n - s1 << endl;
    }
}