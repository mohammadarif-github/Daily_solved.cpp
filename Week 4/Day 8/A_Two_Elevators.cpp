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
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == 1)
    {
        cout << 1 << endl;
        return;
    }

    ll x, y;
    x = a - 1;
    y = max(b,c)-min(b,c)+(c-1);

    if (x < y)
        cout << 1 << endl;
    else if (x > y)
        cout << 2 << endl;
    else
        cout << 3 << endl;
}
int main()
{
    boost;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
