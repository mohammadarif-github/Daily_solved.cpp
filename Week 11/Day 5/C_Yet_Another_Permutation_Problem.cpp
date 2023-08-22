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
        // ans = floor(n/2)

        vector<int> vis(n + 1);
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i])
                continue;
            int now = i;
            while (now <= n)
            {
                if (vis[now])
                {
                    break;
                }
                vis[now] = 1;
                ans.push_back(now);
                now *= 2;
            }
        }
        for (int i : ans)
            cout << i << " ";
        cout << "\n";
    }
}