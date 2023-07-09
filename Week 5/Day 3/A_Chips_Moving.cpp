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
    // cin >> t;
    // while (t--)
    {
        int n;
        cin >> n;
        vector<ll>v(n);
        for(int i = 0 ;i<n;i++)cin >> v[i];
        int ans = INT_MAX;
        // sort(v.begin(),v.end());
        for (int i = 0; i < n ; i++)
        {
            int x = 0;
            for (int j = 0; j < n ; j++)
            {
                if((v[i]-v[j])%2)
                    x +=1;
            }
            ans = min(ans,x);
        }
        cout << ans << endl;
    }
    
}
