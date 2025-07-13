#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        int s = x;
        int c = n;
        long long minsum=1, maxsum = 0;
        minsum = (k * (k + 1)) / 2;
        for (int i = 1; i <= k; i++)
        {
            maxsum = maxsum + c;
            c--;
        }
        if(x>=minsum&&x<=maxsum)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}