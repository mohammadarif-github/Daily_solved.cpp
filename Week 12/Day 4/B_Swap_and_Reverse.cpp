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
        int n, m;
        string s;
        cin >> n >> m >> s;
        if (!(m & 1))
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else
        {
            string ev = "", od = "";
            for (int i = 0; i < n; i += 2)
                ev += s[i];
            for (int i = 1; i < n; i += 2)
                od += s[i];
            sort(ev.begin(), ev.end());
            sort(od.begin(), od.end());
            string ans;
            int l = 0, r = 0;
            for (int i = 0; i < n; i++)
            {
                if (i & 1)
                {
                    ans += od[l];
                    l++;
                }
                else
                {
                    ans += ev[r];
                    r++;
                }
            }
            cout << ans << endl;
        }
    }
}
