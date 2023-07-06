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
    int x, y;
    cin >> x >> y;
    if (y % x != 0)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
    else
    {
        cout << 1 << " " << y / x << endl;
        return ;
    }
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
