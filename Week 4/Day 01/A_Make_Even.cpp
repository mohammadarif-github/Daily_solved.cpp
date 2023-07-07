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
    string n;
    cin >> n;
    int l = n.size();
    if ((n[l - 1] - '0') % 2 == 0)
    {
        cout << 0 << endl;
    }
    else if ((n[0] - '0') % 2 == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        int ans = -1;
        for (int j = 0; j < l; j++)
        {
            if ((n[j] - '0') % 2 == 0)
            {
                ans = 2;
            }
        }
        cout << ans << endl;
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
