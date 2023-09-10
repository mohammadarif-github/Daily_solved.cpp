/*

    Author :--
    !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!
    |                                         |
    |                                         |
    |  cout<< "MOHAMMAD ARIFUL ISLAM"<< endl  |
    |                                         |
    |                                         |
    !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!

*/
#include <bits/stdc++.h>
#define boost                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl;

using namespace std;
int main()
{
    boost;
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (x == y)
            cout << 1 << endl;
        else if (y % x == 0)
            cout << y / x << endl;
        else if (y < x)
        {
            ll a = ceil((double)x / y);
            y = y * a;
            // cout << y << endl;
            cout << ceil((double)y / x) << endl;
        }
        else
        {
            ll a = y / x;
            if ((a * x) != y)
                a++;
            cout << a << endl;
        }
    }
}
