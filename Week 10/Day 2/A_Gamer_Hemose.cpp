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
        int n,h;
        cin >> n >>h;
        vector<int>v(n);
        for(int i =0 ;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        if(h<=v[n-1])cout << 1 << endl;
        else 
        {
            int x = v[n-1]+v[n-2];
            int ans = (((double)h/x));
            if((ans*x)<h)
            {
                ans*=2;
                ans++;
            }
            else ans*=2;
            cout << ans << endl;
        }
    }
    
}