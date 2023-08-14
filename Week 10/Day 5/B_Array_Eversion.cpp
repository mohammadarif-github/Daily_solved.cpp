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
        vector<int> v(n);
        int maxx = INT_MIN;
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] >= maxx)
                idx = i;
            maxx = max(v[i], maxx);
        }
        if (v[n - 1] == maxx)
            cout << 0 << endl;
        else
        {
            int ans = 1;
            maxx = v[n-1];
            for (int i = n-1; i >idx; i--)
            {
                if(v[i]>maxx)
                {
                    ans++;
                    maxx = v[i];
                }
            }
            cout << ans << endl;
        }
    }
}
