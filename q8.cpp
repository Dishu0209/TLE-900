#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
     
      int count=0,out=2;
     
      for (int i=1;i<n;i++)
      {
        if(s[i]==s[i-1])
        count++;
        else
        {
            
            out=max(out,(count+2));
            count=0;
        }
      }
cout<<max(out,(count+2))<<endl;
    }
}