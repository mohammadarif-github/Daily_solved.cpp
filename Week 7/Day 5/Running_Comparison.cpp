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
        vector<int> al(n);
        vector<int> bb(n);
        for (int i = 0; i < n; i++)
        {
            cin >> al[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> bb[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (((al[i] * 2) >= bb[i]) && ((bb[i] * 2) >= al[i]))
            {
                ans++;
                // cout << al[i] << " " << bb[i] << endl;
            }
        }
        cout << ans << endl;
    }
}
