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
        int n;
        cin >> n;
        vector<ll>v(n);
        map<int,int>mp;
        for (int i = 0; i < n ; i++)
        {
            cin >> v[i];
            mp[v[i]]=1;
        }
        ll ans =0,cnt=0;
        for( auto it = mp.rbegin();it!=mp.rend();it++)
        {
            if(cnt==2)break;
            ans+=it->first;
            cnt++;
        }
        cout << ans << endl;
    }
    
}
