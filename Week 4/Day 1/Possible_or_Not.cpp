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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define minus cout << -1 << endl;
#define mp map<ll, ll>

using namespace std;
int main()
{
    boost;
    vector<ll> v;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, b, ans = -1;
        cin >> n >> b;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            ll in = (arr[i] & b);
            if (in == b)
            {
                ans = (ans & arr[i]);
            }
        }
        // else
        {
            // for (int i = 0; i < v.size(); i++)
            // {
            //     ans = v[i] & ans;
            // }
            if (ans == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
