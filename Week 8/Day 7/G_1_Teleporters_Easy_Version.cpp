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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            ll in;
            cin >> in;
            v[i] = (in + i + 1);
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (k - v[i] < 0)
                break;
            else
            {
                k -= v[i];
                ans++;
            }
            // cout << v[i] << " ";
        }
        cout << ans << endl;
    }
}
