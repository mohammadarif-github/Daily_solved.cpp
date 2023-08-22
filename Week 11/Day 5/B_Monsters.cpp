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
        int n, k, idx = -2;
        cin >> n >> k;

        vector<pair<int, int>> ans;
        int in, x;
        for (int i = 0; i < n; i++)
        {
            cin >> in;
            x = (in % k);
            if (x == 0)
                x = k;
            ans.push_back({-x, i + 1});
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < n; i++)
            cout << ans[i].second << " ";
        cout << endl;
    }
}