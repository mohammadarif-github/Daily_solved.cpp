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
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int q;
        cin >> q;
        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(v.begin(), v.end(), x);
            int ans = it - v.begin();
            if (ans == 0)
                cout << "X ";
            else
                cout << v[ans - 1] << " ";
            it = upper_bound(v.begin(), v.end(), x);
            ans = it - v.begin();
            if (ans == n)
                cout << "X" << endl;
            else
                cout << v[ans] << endl;
        }
    }
}
