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
        int n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(),v.end());
        map<ll, ll> mp;
        for (int i = 0; i < q; i++)
        {
            ll x, y;
            cin >> x >> y;
            mp[--x]++;
            mp[y]--;
        }
        ll temp = 0,i=0;
        vector<ll>ans(n);
        ans[0] = mp[0];
        for (int i = 1 ;i<n;i++ )
        {
            mp[i]+=mp[i-1];
            ans[i]= mp[i];
            // cout << mp[i] << " ";
        }
        
        sort(ans.begin(),ans.end());
        ll sum =0 ;
        for(int i =0 ;i<n;i++)sum+=(ans[i]*v[i]);
        cout << sum << endl;
        
    }
}
