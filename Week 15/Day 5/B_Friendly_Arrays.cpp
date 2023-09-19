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
        ll n, m, OR = 0;
        cin >> n >> m;
        vector<ll> a(n), b(m);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll j = 0; j < m; j++)
        {
            cin >> b[j];
            OR |= b[j];
        }

        ll mn = 0, mx = 0;

        for (ll i = 0; i < n; i++)
        {
            mn ^= a[i];
            mx ^= (a[i] | OR);
        }
        cout << min(mx, mn) << " " << max(mx, mn) << '\n';
    }
}
