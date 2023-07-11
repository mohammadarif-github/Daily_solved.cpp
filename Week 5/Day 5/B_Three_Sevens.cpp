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
        int q;
        cin >> q;
        map<int, int> mp;
        map<int, int> freq;
        bool ok = true;
        for (int j = 1; j <= q; j++)
        {
            int n;
            cin >> n;
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                int in;
                cin >> in;
                if (mp[in])
                    count++;
                mp[in] = j;
            }
            
        }
        for(auto it : mp)
            freq[it.second] = it.first;
        if (freq.size()<q)
            cout << -1 ;
        else
        {
                for (auto it : freq)
                {
                    cout << it.second << " " ;
                }
        }
        cout << endl;
        mp.clear();
    }
}
