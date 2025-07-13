#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int s = 0;
        int i = 1;

        int k = 0;

        while (k != 1)
        {
            if (n % i == 0)
            {
                s++;
                i++;
            }
            else
            {
                k = 1;
                break;
            }
        }

        cout << s << endl;
    }
}