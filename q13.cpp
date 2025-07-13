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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int out=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=0&&a[i-1]==0)
            {
                out++;
            }
        }
        if((find(a.begin(),a.end(),0)==a.end())||(a[0]!=0))
       {out++;} 
       if(out>2)
       out=2;
        cout<<out<<endl;
    }
}