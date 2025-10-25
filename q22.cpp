#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i=0;i<n;i++)
            cin >> a[i];
        int one = count(a.begin(), a.end(), 1);
        int z = count(a.begin(), a.end(), 0);
        
long long out=pow(2, z) * one;
        
        cout <<  out<< endl;
    }
}