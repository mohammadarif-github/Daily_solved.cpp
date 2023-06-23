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
    int t;
    cin >> t;
    while (t--)
    {
        ll n,m,h;
        cin >> n >> m >> h;
        ll car[n];
        ll ps[m];
        for (int i = 0; i < n; i++)
        {
            cin >> car[i];
        }
        for (int i = 0; i < m ; i++)
        {
            cin >> ps[i];
        }
        sort(car,car+n,greater<ll>());
        sort(ps,ps+m,greater<ll>());
        ll ans =0;
        for (int i = 0,j=0; (i <m && j<n) ; i++,j++)
        {
            if(ps[i]*h>car[j])
                ans+=car[j];
            else 
                ans+=ps[i]*h;

        }
        cout << ans << endl;
        
    }
    
}
