#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin>>n;
        int k=0;
        while(n>0)
        {
            int l=n%10;
            
            if(l==5)
            {
                n=n/10;
                int r=n%10;
                if(r!=2&&r!=5&&r!=7)
                k++;
                else
                break;
            }
            else if(l==0)
            {
                n=n/10;
                int r=n%10;
                if(r!=0)
                k++;
                else
                break;
            }
            else
            k++;
        }
        cout<<k<<endl;
    }
}