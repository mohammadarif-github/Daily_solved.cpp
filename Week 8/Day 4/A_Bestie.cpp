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
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    boost;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int gc = v[0];
        for (int i = 1; i < n; i++)
            gc = gcd(gc, v[i]);
        if (gc == 1)
            cout << 0 << endl;
        else
        {
            int ans = 3;
            if (gcd(gcd((n), v[n - 1]),gc) == 1)
            {
                ans = 1;
            }
            else if (gcd(gcd((n - 1), v[n - 2]),gc) == 1)
            {
                ans = 2;
            }
            // cout << gcd((n - 1), v[n - 2]) << endl;
            cout << ans << endl;
        }
    }
}
