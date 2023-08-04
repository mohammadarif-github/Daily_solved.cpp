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
        int n;
        cin >>n;
        ll x,y;
        map<ll,ll>mp;
        for(int i =0 ;i<n;i++)
        {
            cin >> x >> y;
            mp[x]++;
            mp[y+1]--;
        }
        ll sum = 0 ;
        bool ok = true;
        for(auto it : mp)
        {
            sum+=it.second;
            if(sum>2)
            {
                ok = false;
                break;
            }
        }
        if(ok)yes;
        else no;
    }
    
}
