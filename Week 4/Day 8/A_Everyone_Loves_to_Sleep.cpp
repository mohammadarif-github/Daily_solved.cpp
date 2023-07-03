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
    int n, h, m, tm;
    cin >> n >> h >> m;
    tm = h * 60 + m;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x, y, al;
        cin >> x >> y;
        al = x * 60 + y;
        int dif = al - tm;
        if(dif<0)
        {
            dif+=1440;
        }
        ans = min (ans,dif);
    }
    cout << ans/60 << " " << ans%60 << endl;
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
