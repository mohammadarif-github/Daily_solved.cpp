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
vector<ll> v[200005];
ll leaf[200005];
bool visited[200005];
ll leaf_count(ll src)
{
    visited[src] = true;
    ll ans = 0;
    bool found = true;
    for (ll i = 0; i < v[src].size(); i++)
    {
        if (!visited[v[src][i]])
        {
            found = false;
            ans += leaf_count(v[src][i]);
        }
    }
    if (found)
    {
        return leaf[src] = 1;
    }
    else
        return leaf[src] = ans;
}
int main()
{
    boost;
    int t;
    cin >> t;
    while (t--)
    {
    memset(visited, false, sizeof(visited));
    memset(leaf, 0, sizeof(leaf));
        ll n;
        cin >> n;
        ll edge = n - 1;
        while (edge--)
        {
            ll x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }

        ll q;
        cin >> q;
        leaf_count(1);
        while (q--)
        {
            ll a, b;
            cin >> a >> b;
            cout << leaf[a] * leaf[b] << endl;
        }
        for (ll i = 1; i <= n; i++)
        {
            v[i].clear();
        }
    }
}
