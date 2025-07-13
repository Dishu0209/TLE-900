#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, t;
        cin >> s >> t;
       

        int i=t.length()-1,j=s.length()-1;
        vector<char>del;
        int k=0;

        while (s.length() >= t.length())
        {
            if (t[i] != s[j])
                {
                    del.push_back(s[j]);
                    s.erase(j,1);
                
                    j--;
                }
            else
            {
                if(find(del.begin(),del.end(),s[j])<del.end())
                {
                    s.erase(j,1);
                    
                }
                else
                {
                    i--;
                }
                
                j--;
            }
            if(i<0)
            {
                k=1;
                break;
            }
                
        }

        if (s == t||k==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}