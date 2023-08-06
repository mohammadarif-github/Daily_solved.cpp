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
        int n, k, q;
        cin >> n >> k >> q;
        vector<ll> v(n + 1);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector<pair<pair<int, int>, ll>> op(k);
        for (int i = 0; i < k; i++)
        {
            cin >> op[i].first.first;
            op[i].first.first--;
            cin >> op[i].first.second;
            cin >> op[i].second;
        }
        map<int, int> mp;
        for (int i = 0; i < q; i++)
        {
            ll x, y;
            cin >> x >> y;
            mp[--x]++;
            mp[y]--;
        }
        for (int i = 1; i < k; i++)
        {
            mp[i] += mp[i - 1];
        }
        vector<ll> ans(n + 1);
        for (int i = 0; i < k; i++)
        {
            ans[op[i].first.first] += op[i].second * mp[i];
            ans[op[i].first.second] -= op[i].second * mp[i];
        }

        for (int i = 1; i < n; i++)
            ans[i] += ans[i - 1];
        for (int i = 0; i < n; i++)
        {
            ans[i] += v[i];
            cout << ans[i] << " ";
        }
    }
}
