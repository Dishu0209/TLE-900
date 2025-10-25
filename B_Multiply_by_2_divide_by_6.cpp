#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;cin>>n;
        int th=0,tw=0;
        while(n>0)
        {
            if(n%3==0)
            {
                n=n/3;
                th++;

            }
            else if(n%2==0)
            {
                n=n/2;
                tw++;
            }
            else
            break;
        }
        if(n>1||th<tw)
        cout<<-1<<endl;
        else if(th==tw)
        cout<<th<<endl;
        else
        cout<<th-tw+th<<endl;
        

    }
}