#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=0,k=0;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i=n-1;i>0;i--)
        {
            if(a[i-1]>=a[i])
            {
                a[i-1]/=2;
             
                i++;
                count++;
            }
            if(a[i-1]==0&&i-1>0)
            {
                k=1;
                break;
            }
        }
        if(k==1)
        cout<<-1<<endl;
        else
        cout<<count<<endl;

    }
}