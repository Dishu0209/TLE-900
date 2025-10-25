#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,c=0,k;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        for(int i=1;i<n-1;i++)
        {
            if(a[i-1]<a[i]&&a[i+1]<a[i])
            {
                c=1;
                k=i;
                break;
            }
        }
        if(c==1)
        {
            cout<<"YES"<<endl<<k<<" "<<k+1<<" "<<k+2<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}