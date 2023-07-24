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
        int n, k;
        cin >> n >> k;

        int x = 100 - ((100 * n) / 100);
        int y = 200 - ((200 * k) / 100);
        // cout << x << " " << y << endl;
        if (x < y)
            cout << "FIRST" << endl;
        else if (y < x)
            cout << "SECOND" << endl;
        else
            cout << "BOTH" << endl;
    }
}
