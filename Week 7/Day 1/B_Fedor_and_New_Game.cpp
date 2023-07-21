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
int bit_diff(int n)
{
    int diff = 0;
    while (n)
    {
        diff += (n & 1);
        n >>= 1;
    }
    return diff;
}
int main()
{
    boost;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(m + 1);

        for (int i = 0; i <= m; i++)
            cin >> v[i];

        int ans = 0;

        for (int i = 0; i < m; i++)
        {
            if (__builtin_popcount(v[m] ^ v[i]) <= k)
                ans++;
        }

        cout << ans << endl;
    }
}
