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
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<ll, ll> mp;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll in;
            cin >> in;
            if (mp[in])
            {
                ll x = mp.size();
                ans = max ( x, ans);
                mp.clear();
                // mp[in]++;
            }
            mp[in]++;
        }
        cout << ans << endl;
    }
}