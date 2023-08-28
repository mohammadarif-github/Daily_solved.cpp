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
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> ans;

        if (y - x < ((n -1)* (n) / 2))
            minus
        else {
            ans.push_back(y);
            int a = y - 1, cnt = 1;
            for (int i = 0; i < n - 2; i++)
            {
                ans.push_back(a);
                cnt++;
                a = a - cnt;
            }
            ans.push_back(x);
            reverse(ans.begin(), ans.end());

            {
                for (int i = 0; i < ans.size(); i++)
                {
                    cout << ans[i] << " ";
                }
                cout << endl;
            }
        }
    }
}