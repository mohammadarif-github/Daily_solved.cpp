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
        vector<int> v(n);
        int in;
        for (int i = 0; i < n; i++)
        {
            cin >> in;
            v[i] = in;
            mp[in]++;
        }
        int ev = 0, od = 0;
        bool ok = true;
        for (auto it : mp)
        {
            if (it.second % 2 == 1 && it.second > 1)
                od++;
            if (it.second == 1)
                ok = false;
            else if (it.second % 2 == 0)
                ev++;
        }

        if (ok)
        {
            for (int i = 0; i < n;)
            {
                for (int j = i + mp[v[i]]; j > i; j--)
                {
                    cout << j << " ";
                }
                i+=mp[v[i]];
            }
            cout << endl;
        }
        else
            minus
    }
}
