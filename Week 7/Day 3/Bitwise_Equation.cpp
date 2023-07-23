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
        ll n;
        cin >> n;
        ll a, b, c = 1, d;
        if (n == 0)
        {
            cout << "3 1 4 5" << endl;
        }
        else if (n == 1)
        {
            cout << "4 1 2 3" << endl;
        }
        else
        {
            if ((1 ^ (n - 1)) == n)
                d = n - 1;
            else if ((1 ^ (n + 1)) == n)
                d = n + 1;
            bool found = false;
            for (int i = 2; i < 11; i++)
            {
                for (int j = i + 1; j <= 11; j++)
                {
                    if (j == d)
                        j++;
                    if ((i & j) == 0 && (j != d && j != c) && (i != c && i != d))
                    {
                        a = i;
                        b = j;
                        found = true;
                        break;
                    }
                }
                if (found)
                    break;
            }
            // cout << endl;
            cout << a << " " << b << " " << c << " " << d << endl;
        }
    }
}
