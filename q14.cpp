#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,min=0,max=0;
        cin >> n;
        long long c=n;
        if(n%2!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        while(n>1)
        {
            if(n%4>0)
            {
                
                max++;
                n=n-6;
            }
            else{
                max+=n/4;
                n=0;

            }
        }
        while(c>1)
        {
            if(c%6>0)
            {
                min++;
                c=c-4;
            }
            else{
                min+=c/6;
                c=0;
            }
        }
        if(n!=0||c!=0)
        cout<<-1<<endl;
        else
        cout<<min<<" "<<max<<endl;
    }
}