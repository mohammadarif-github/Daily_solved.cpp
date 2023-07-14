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
        int n;
        cin >> n;
        vector<int> v(n);
        vector<ll> a;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        a.push_back(abs(v[0] - v[1]));
        a.push_back(abs(v[n - 1] - v[n - 2]));

        for (int i = 1; i <= n - 1; i++)
        {
            ll x = abs(v[i] - v[i + 1]);
            ll y = abs(v[i] - v[i - 1]);
            a.push_back(min(x, y));
        }
        
        sort(a.begin(), a.end());
        cout << a[0] << endl;
    }
}
