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
        ll sz;
        string s, ans;
        cin >> sz >> s;

        for (ll i = sz - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                ll x = s[i - 1] - '0' + (s[i - 2] - '0') * 10;
                ans += 'a' + x - 1;
                // cout << ans << endl;
                i -= 2;
            }
            else
            {
                ans += 'a' + (s[i] - '0') - 1;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}
