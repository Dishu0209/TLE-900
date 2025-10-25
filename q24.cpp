#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b;
        cin>>a>>b;
        long long g,c;
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        g=abs(b-a);
        c=g-(b%g);
        cout<<g<<" "<<min(c,b%g)<<endl;
    }
}