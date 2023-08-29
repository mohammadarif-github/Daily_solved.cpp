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
        if (n & 1)
        {
            int ans = n / 2;
            cout << ans << endl;
            ans -= 1;
            while (ans--)
            {
                cout << 2 << " ";
            }
            cout << 3 << endl;
        }
        else
        {
            int ans = n / 2;
            cout << ans << endl;
            while (ans--)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
    }
}
