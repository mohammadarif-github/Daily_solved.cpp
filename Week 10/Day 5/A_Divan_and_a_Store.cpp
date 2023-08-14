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
        int n,l,r,k;
        cin >> n >> l >> r >>k;
        vector<int>v(n);
        for(int i =0 ;i<n;i++)cin >> v[i];
        sort(v.begin(),v.end());
        int ans =0 ,cst=0;
        for(int i =0 ;i<n;i++)
        {
            if((v[i]>=l && v[i] <=r) && (cst+v[i])<=k)
            {
                ans++;
                cst+=v[i];
            }

        }
        cout << ans << endl;
    }
    
}
