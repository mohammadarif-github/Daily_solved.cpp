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

const ll mod = 1e9 + 7;
using namespace std;

int main()
{
    boost;
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ans = 1;
        for(int i =0;i<n;i++)
        {
            ans = (ans*k)%mod;
            if(k>1) k--;
        } 
        cout << ans << endl;
    }
}
