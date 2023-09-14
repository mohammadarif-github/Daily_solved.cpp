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
        int n, x, y;
        cin >> n >> x >> y;
        int cnt = 2, tm = min(x, y) * 2;
        if (n == 1)
            cout << tm / 2 << endl;
        else
        {
            if (cnt == n)
                cout << tm << endl;
            else
            {
                n -= cnt;
                tm += ceil((double)n / min(x, y));
                cout << tm << " ";
                if ((tm - 2) >= max(x, y))
                    tm -= (tm - 2) / max(x, y);
                cout << tm << endl;
            }
        }
    }
}
