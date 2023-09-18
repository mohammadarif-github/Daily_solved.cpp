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
const int N = 2e5 + 5;
int n, k, a, b;
vector<pair<ll, ll>> v(N);

ll get_dis(pair<ll, ll> a, pair<ll, ll> b)
{
    ll ans = abs(a.first - b.first) + abs(a.second - b.second);
    return ans;
}
ll get_min_dis(pair<int, int> a)
{
    ll ans = 1e18;
    for (int i = 0; i < k; i++)
    {
        ans = min(get_dis(a, v[i]), ans);
    }
    return ans;
}
void solve()
{
    cin >> n >> k >> a >> b;
    a--;
    b--;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    ll ans = get_dis(v[a], v[b]);
    if (k)
    {
        ans = min(ans, get_min_dis(v[a]) + get_min_dis(v[b]));
    }
    cout << ans << endl;
}
int main()
{
    boost;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
