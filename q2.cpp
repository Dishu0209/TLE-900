#include <bits/stdc++.h>
using namespace std;
vector<int> check(string s, int n, int k)
{
    vector<int> v;
    set<char> set;
    for (int i = 0; i < n; i++)
    {
        set.insert(s[i]);
    }
    int c = 0;
    for (char i : set)
    {
        v.push_back(0);
        for (int j = 0; j < n; j++)
        {
            if (i == (char)s[j])
                v[c]++;
        }
        c++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (k == 0)
            break;
        if (v[i] % 2 != 0)
        {
            v[i]--;
            k--;
        }
    }
    int count = 0;
    for (int i = 0; i < v.size(); i++)
        if (v[i] % 2 != 0)
            count++;

    while (k > 0)
    {

        for (int i = 0; i < v.size(); i++)
        {
            if (k == 0)
                    break;
            if (count > 0)
            {
                if (v[i] % 2 != 0)
                {
                    
                    v[i]--;
                    k--;
                    count--;
                }
            }
            else
            {
                v[i]--;
                k--;
                count++;
                break;
            }
        }
    }

    return v;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n - k == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        vector<int> v = check(s, n, k);

        int count = 0;
        for (int i = 0; i < v.size(); i++)
            if (v[i] % 2 != 0)
                count++;

        if (count > 1)
            cout << "NO" << endl;
        else if ((n - k) % 2 == 0 && count == 0)
            cout << "YES" << endl;
        else if ((n - k) % 2 != 0 && count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}