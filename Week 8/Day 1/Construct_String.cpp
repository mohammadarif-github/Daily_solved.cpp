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
        string s;
        cin >> n >> s;
        string ans;
        for (int i = 0; i < n; i++)
        {
            int cnt = 1;
            ans += s[i];
            if (s[i] == s[i + 1] && i < n - 1)
            {
                while ((s[i] == s[i + 1] && i < n - 1))
                {
                    cnt++;
                    i++;
                }
                if(cnt%2==0)ans+=s[i-1];
                // cout << cnt << endl;
            }
        }
        cout << ans << endl;
    }
}
