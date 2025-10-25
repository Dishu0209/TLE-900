#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<long long>a(60);
    a[0]=2;
    for(int i=1;i<60;i++)
    {
        a[i]=a[i-1]*2;
    }
    while (t--)
    {
        long long n;
        cin>>n;
        if(find(a.begin(),a.end(),n)!=a.end())
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
    }
}