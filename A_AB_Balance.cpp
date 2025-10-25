#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c1 = 0;
        int l = s.length();
        for (int i = 1; i < l; i++)
        {
            if ((s[i] == 'a' && s[i - 1] == 'b') || (s[i] == 'b' && s[i - 1] == 'a'))
                c1++;
        }
        if (c1 % 2 == 0)
        {
            
            cout << s << endl;
            continue;
        }
        
        s[0]=s[l-1];
        cout << s << endl;
    }
}