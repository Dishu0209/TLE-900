#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, s = 0;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s = s + a[i];
        }

        vector<vector<int>> v(q, vector<int>(3));
        vector<int> sum(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            sum[i] = sum[i - 1] + a[i - 1];
        }
        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            int sub=sum[r]-sum[l-1];
            int s1=s;
            s1=s1-sub;
            s1=s1+((r-l+1)*k);
            
            if (s1 % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}
