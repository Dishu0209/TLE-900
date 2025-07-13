#include <bits/stdc++.h>
using namespace std;
int check(int a, int b, int xk, int yk, int xq, int yq)
{
    int x, y, s = 0;
    x = xq + a;
    y = yq + b;
    if ((x == xk + a && y == yk + b) || (x == xk - a && y == yk - b) || (x == xk + a && y == yk - b) || (x == xk - a && y == yk + b) || (x == xk + b && y == yk + a) || (x == xk - b && y == yk - a) || (x == xk + b && y == yk - a) || (x == xk - b && y == yk + a))
        s++;

    x = xq - a;
    y = yq - b;
    if ((x == xk + a && y == yk + b) || (x == xk - a && y == yk - b) || (x == xk + a && y == yk - b) || (x == xk - a && y == yk + b) || (x == xk + b && y == yk + a) || (x == xk - b && y == yk - a) || (x == xk + b && y == yk - a) || (x == xk - b && y == yk + a))
        s++;
    x = xq + a;
    y = yq -b;
    if ((x == xk + a && y == yk + b) || (x == xk - a && y == yk - b) || (x == xk + a && y == yk - b) || (x == xk - a && y == yk + b) || (x == xk + b && y == yk + a) || (x == xk - b && y == yk - a) || (x == xk + b && y == yk - a) || (x == xk - b && y == yk + a))
        s++;
    x = xq - a;
    y = yq + b;
    if ((x == xk + a && y == yk + b) || (x == xk - a && y == yk - b) || (x == xk + a && y == yk - b) || (x == xk - a && y == yk + b) || (x == xk + b && y == yk + a) || (x == xk - b && y == yk - a) || (x == xk + b && y == yk - a) || (x == xk - b && y == yk + a))
        s++;
    x = xq + b;
    y = yq + a;
    if ((x == xk + a && y == yk + b) || (x == xk - a && y == yk - b) || (x == xk + a && y == yk - b) || (x == xk - a && y == yk + b) || (x == xk + b && y == yk + a) || (x == xk - b && y == yk - a) || (x == xk + b && y == yk - a) || (x == xk - b && y == yk + a))
        s++;
    x = xq + b;
    y = yq - a;
    if ((x == xk + a && y == yk + b) || (x == xk - a && y == yk - b) || (x == xk + a && y == yk - b) || (x == xk - a && y == yk + b) || (x == xk + b && y == yk + a) || (x == xk - b && y == yk - a) || (x == xk + b && y == yk - a) || (x == xk - b && y == yk + a))
        s++;
    x = xq - b;
    y = yq + a;
    if ((x == xk + a && y == yk + b) || (x == xk - a && y == yk - b) || (x == xk + a && y == yk - b) || (x == xk - a && y == yk + b) || (x == xk + b && y == yk + a) || (x == xk - b && y == yk - a) || (x == xk + b && y == yk - a) || (x == xk - b && y == yk + a))
        s++;
    x = xq - b;
    y = yq - a;
    if ((x == xk + a && y == yk + b) || (x == xk - a && y == yk - b) || (x == xk + a && y == yk - b) || (x == xk - a && y == yk + b) || (x == xk + b && y == yk + a) || (x == xk - b && y == yk - a) || (x == xk + b && y == yk - a) || (x == xk - b && y == yk + a))
        s++;
        if(a==b)
        return s/2;
        else
        return s;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        cout << check(a, b, xk, yk, xq, yq) << endl;
    }
}