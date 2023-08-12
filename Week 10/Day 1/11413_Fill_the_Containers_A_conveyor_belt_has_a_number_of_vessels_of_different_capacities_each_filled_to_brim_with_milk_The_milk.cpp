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
    // int t = 1;
    // cin >> t;
    int n, k;
    while (cin >> n >> k)
    {
        vector<int> v(n);
        int maxx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            maxx = max(v[i], maxx);
        }
        int l = maxx, r = INT_MAX;
        int ans;
        while (l <= r)
        {
            int cap = l + (r - l) / 2;
            int sum = 0, cnt = 1;
            for (int i = 0; i < n; i++)
            {
                if (sum + v[i] <= cap)
                {
                    sum += v[i];
                }
                else
                {
                    cnt++;
                    sum = v[i];
                }
            }
            if (cnt <= k)
            {
                ans = cap;
                r = cap - 1;
            }
            else
            {
                l = cap + 1;
            }
        }
        cout << ans << endl;
    }
}
