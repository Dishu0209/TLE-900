#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        int z = 0,o=0;
        cin >> s;
        for (int i = 0; i < s.length() ; i++)
        {
            if (s[i] == '0' )
            
                z++;
               
                
            
            else 
                o++;
              
                
            
        }
        int c=min(z,o);

        if(c%2==0)
        cout<<"NET"<<endl;
        else
        cout<<"DA"<<endl;

    }
}