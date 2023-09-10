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
        ll x,y;
        cin >> x >> y;
        ll ans = LONG_LONG_MAX;
        for (int i = 10; i >= 0; i--)
        {
            ll a = x,cnt= i,b = y+i ;
            while (a)
            {
                if(cnt>ans)break;
                a = a/b;
                cnt++;
            }
            ans = min(ans,cnt);
            // cout << cnt << endl;
        }
        cout << ans << endl;
    }
    
}
