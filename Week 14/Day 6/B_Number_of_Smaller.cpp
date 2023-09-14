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
    //cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k ;
        vector<int>v(n+1),m(k+1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> m[i];
        }
        v[n]= 1e9,m[k]=1e9;
        ll ans = 0,j = 0;
        for (int i = 0; i < k; i++)
        {
            while (v[j]<m[i])
            {
                ans++;
                j++;
            }
            cout << ans << " ";   
        }
    }
    
}
