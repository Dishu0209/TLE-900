#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n,n1;
        cin >> n;
        n1=n;
        int k = 0, m1=0, m2=0;
        while (n > 0)
        {
            int l = n % 10;
            if (l != 5)
            {
                m1++;
                n = n / 10;
            }
            else
            {
                n/=10;
                while (n > 0)
                {
                    int l1 = n % 10;
                    if (l1 == 2 || l1 == 7)
                    {
                        k = 1;
                        break;
                    }
                    else
                    {
                        m1++;
                        n /= 10;
                    }
                }
            }
            if (k == 1)
                break;
        }
        k=0;
        while (n1 > 0)
        {
            int l = n1 % 10;
            if (l != 0)
            {
                m2++;
                n1 = n1 / 10;
            }
            else
            {
                n1/=10;
                while (n1 > 0)
                {
                    int l1 = n1 % 10;
                    if (l1 == 5 || l1 == 0)
                    {
                        k = 1;
                        break;
                    }
                    else
                    {
                        m2++;
                        n1 /= 10;
                    }
                }
            }
            if (k == 1)
                break;
        }
        cout<<min(m1,m2)<<endl;
    }
   
}
