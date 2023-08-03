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
        string s;
        int n;
        cin >> n >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        if (mp.size() == n)
            cout << n << endl;
        else if (mp.size() == 1)
            cout << 2 << endl;
        else
        {
            map<int, int> m;
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                m[s[i]]++;
                mp[s[i]]--;
                if (mp[s[i]]==0)mp.erase(s[i]);
                int x = mp.size()+m.size();
                ans = max(ans,x);
            }
            cout << ans << endl;
        }
    }
}
