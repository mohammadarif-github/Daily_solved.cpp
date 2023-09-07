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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            mp[in]++;
        }
        int sz = mp.size();
        int maxx = 0;
        bool found = false;
        for (auto it : mp)
        {
            if (it.second > 1)
            {
                maxx = max(it.second, maxx);
                found = true;
            }
        }
        if(found)sz--;
        int ans =0;
        if(!found && sz>1)ans=1;
        else 
        {
            ans = min(sz,maxx);
            if(maxx-sz>0)ans++;
        }
        cout << ans << endl;
    }
}
