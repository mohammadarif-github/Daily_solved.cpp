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
        int i, n;
        cin >> i >> n;
        int diff = INT_MIN, ans = 0;
        for (; i <= n; i++)
        {
            string  s = to_string(i);
            int mini = 10, maxx = 0;
            for (int j = 0; j < s.size(); j++)
            {
                char c = s[j];
                int x = c - '0';
                mini = min(mini,x);
                maxx = max(maxx,x);
            }
            if(diff<maxx-mini){
                diff = maxx-mini;
                ans = i;
            }
            if(diff==9)break;
        }
        cout << ans << endl;
    }
}
