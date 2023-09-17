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
        vector<pair<int, int>> v;
        for (ll i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            v.push_back({in, i});
        }
        sort(v.begin(), v.end());
        int x = n;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i].first << " " << v[i].second << endl;
        // }
        for (int i = 0; i < n; i++)
        {
            v[i].first = x;
            x--;
        }
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            ans[v[i].second] = v[i].first;
        }
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
}